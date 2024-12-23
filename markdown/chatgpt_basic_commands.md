Vim's basic editing commands are essential for navigating and modifying text in a file. Here is a list of some of the most commonly used commands in Vim's **normal mode** (not insert mode).

### 1. **Movement Commands:**
- **`h`** - Move the cursor **left** by one character.
- **`j`** - Move the cursor **down** by one line.
- **`k`** - Move the cursor **up** by one line.
- **`l`** - Move the cursor **right** by one character.

- **`w`** - Move to the **beginning of the next word**.
- **`e`** - Move to the **end of the current word**.
- **`b`** - Move to the **beginning of the previous word**.
- **`0`** - Move to the **beginning of the current line**.
- **`$`** - Move to the **end of the current line**.
- **`gg`** - Move the cursor to the **beginning of the file**.
- **`G`** - Move the cursor to the **end of the file**.
- **`5G`** - Move to the **5th line** of the file.

### 2. **Text Editing Commands:**
- **`x`** - **Delete** the character under the cursor.
- **`dd`** - **Delete** the current line.
- **`dw`** - **Delete** from the cursor to the beginning of the next word.
- **`d$`** - **Delete** from the cursor to the end of the line.
- **`d0`** - **Delete** from the cursor to the beginning of the line.
- **`dG`** - **Delete** from the cursor to the end of the file.
- **`u`** - **Undo** the last change.
- **`Ctrl + r`** - **Redo** the undone change.
- **`yy`** - **Yank** (copy) the current line.
- **`yw`** - **Yank** the current word.
- **`p`** - **Paste** the yanked or deleted content after the cursor.
- **`P`** - **Paste** the yanked or deleted content before the cursor.

### 3. **Search and Replace:**
- **`/pattern`** - **Search** for the word or pattern forward.
- **`?pattern`** - **Search** for the word or pattern backward.
- **`n`** - Move to the **next occurrence** of the search pattern.
- **`N`** - Move to the **previous occurrence** of the search pattern.
- **`:%s/old/new/g`** - **Replace all occurrences** of `old` with `new` in the entire file.
- **`:s/old/new/g`** - **Replace all occurrences** in the current line.

### 4. **Undo and Redo:**
- **`u`** - Undo the last action.
- **`Ctrl + r`** - Redo the last undone action.

### 5. **File Operations:**
- **`:w`** - Save the current file.
- **`:q`** - Quit Vim (only if no changes were made).
- **`:wq`** - Save and quit.
- **`:x`** - Save and quit (similar to `:wq`).
- **`:q!`** - Quit without saving changes (force quit).
- **`:e filename`** - Open a new file called `filename`.
- **`:w filename`** - Save the current file with a new name.

### 6. **Navigation within Files:**
- **`Ctrl + f`** - Move forward one screen (page down).
- **`Ctrl + b`** - Move backward one screen (page up).
- **`Ctrl + d`** - Move down half a screen.
- **`Ctrl + u`** - Move up half a screen.

### 7. **Vim Modes:**
- **Normal Mode** - The default mode for navigating and editing text. Press `Esc` to return to this mode.
- **Insert Mode** - Used for typing text. Press `i` to enter insert mode, and `Esc` to return to normal mode.
- **Visual Mode** - Used to select text. Press `v` to start visual mode.
  - **`V`** - Start line-wise visual selection.
  - **`Ctrl + v`** - Start block-wise visual selection.

### 8. **Delete, Cut, and Paste:**
- **`d`** - Delete text (use with a movement command).
  - Example: `dw` deletes a word, `d$` deletes to the end of the line.
- **`y`** - Yank (copy) text (use with a movement command).
  - Example: `yw` yanks a word, `yy` yanks a line.
- **`p`** - Paste the text after the cursor.
- **`P`** - Paste the text before the cursor.

### 9. **Split and Switch Windows:**
- **`:split`** or **`:sp`** - Split the window horizontally.
- **`:vsplit`** or **`:vsp`** - Split the window vertically.
- **`Ctrl + w, w`** - Switch between split windows.
- **`Ctrl + w, h/j/k/l`** - Move to the left, down, up, or right window.

### 10. **Other Useful Commands:**
- **`:set number`** - Show line numbers.
- **`:set nonumber`** - Hide line numbers.
- **`:set autoindent`** - Enable automatic indentation.
- **`:set tabstop=4`** - Set the tab width to 4 spaces.

### Summary:
- Vim operates in different **modes**, with **normal mode** being the most used for navigation and editing.
- Common tasks like **moving around** the document, **deleting** text, **copying** and **pasting** content are done using a combination of **keypresses** and **commands**.
- Vim has a steep learning curve but is very powerful for efficient text editing once you master its commands.

These are just some of the basic Vim editing commands. There are many more commands and advanced techniques you can use to make your workflow faster and more efficient.
