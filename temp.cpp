void CDataPrintDlg::OnButtonGetEnumenabledprinter()
{
	funcUpdateStatus("\r\nEnumEnabledPrinter click");

	// Deletes if registered in the list box.
	if(m_List_EnumEnabledPrinter.GetCount() > 0)
	{
		m_List_EnumEnabledPrinter.ResetContent();
	}

	DWORD	dwSize = 0;	
	DWORD	pdwNeeded = 0;
	DWORD	pdwReturned = 0;
	TCHAR	cErrorMessage[256] = {L""};				// Error message
	PR5600_PRINTER_INFO *pr5600PrinterInfo = NULL;	// Array of PR5600_PRINTER_INFO structures
	PR5600RESULT result = PR56ERR_NO_ERROR;

	funcUpdateStatus("Acquire size...pr56XXEnumEnabledPrinter()");
	result = ppr56XXEnumEnabledPrinters(NULL, dwSize, &pdwNeeded, &pdwReturned);

	if(result == PR56ERR_SUCCESS)
	{
		if(pdwNeeded > 0) // When there are available printers
		{	
			int iCount = pdwNeeded / (sizeof(PR5600_PRINTER_INFO));
			
			funcUpdateStatus("Memory area allocation...Malloc()");
			dwSize = sizeof(PR5600_PRINTER_INFO)*iCount;
			pr5600PrinterInfo = (PR5600_PRINTER_INFO*)malloc(dwSize);
			pdwNeeded = 0;
			pdwReturned = 0;

			funcUpdateStatus("Acquisition of printer information...pr56XXEnumEnabledPrinter()");
			result = ppr56XXEnumEnabledPrinters(pr5600PrinterInfo, dwSize, &pdwNeeded, &pdwReturned);

			if(result == PR56ERR_SUCCESS)
			{
				ppr56XXTerminate();				// 42/86 refe sdk v1.00

				for(int i = 0; i < (int)pdwReturned; i++)
				{
					PR5600_PRINTER_INFO *pr5600Info = (PR5600_PRINTER_INFO *)((BYTE *)pr5600PrinterInfo + sizeof(PR5600_PRINTER_INFO)*i);

					// Additional code for compatibility with existing models --- Save model name
					_tcscpy(pPrintInfo[i].cDriverName, pr5600Info->wszName);
					_tcscpy(pPrintInfo[i].cDeviceName, pr5600Info->wszDriverName);	


					CString strName = pr5600Info->wszName;
					pr5600Info = NULL;

					// Enumerates available (online) printers in the list.
					m_List_EnumEnabledPrinter.AddString(strName);
				}

				if(m_List_EnumEnabledPrinter.GetCount() > 0)
				{
					m_List_EnumEnabledPrinter.SetCurSel(0);
				}
			}
			else
			{
				wcscpy(cErrorMessage, L"Function (pr56XXEnumEnabledPrinters) failed.");
				MessageBox(cErrorMessage, L"Notification", MB_ICONWARNING | MB_OK);
				
			}


			if(pr5600PrinterInfo != NULL)
			{
				funcUpdateStatus("Memory release --- free()");
				free(pr5600PrinterInfo);
				pr5600PrinterInfo = NULL;
			}
		}
		else
		{	
			MessageBox(L"No available printers found.", L"Notification", MB_ICONWARNING | MB_OK);
		}
	}
	else
	{
		wcscpy(cErrorMessage, L"Function (pr56XXEnumEnabledPrinters) failed.");
		MessageBox(cErrorMessage, L"Notification", MB_ICONWARNING | MB_OK);
	}
}
