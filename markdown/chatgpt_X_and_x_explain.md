In Vim, `X` and `x` are both used for deleting text, but they have different functionalities:

**x:**

- Deletes the character **under** the cursor.
- It's a quick and efficient way to remove a single character.

**X:**

- Deletes the character **before** the cursor.
- This is useful when you want to remove a character that precedes your current cursor position.

**Example:**

If you have the following text:

```
hello world
```

And your cursor is positioned on the 'o' in 'world', then:

- Pressing `x` will delete the 'o', leaving:
  ```
  hell world
  ```
- Pressing `X` will delete the space before the 'w', leaving:
  ```
  helloworld
  ```

Remember that both `X` and `x` operate in normal mode. To enter normal mode, press the `Esc` key.

