# `_printf` Project

---

## Project Description

The `_printf` project is a **simplified reproduction of the standard C `printf` function**.
Its goal is to understand format string parsing, variable argument lists (`va_list`), and modular code organization across multiple files.

---

## Requirements

* Compile with GCC using **C89/ANSI C** standard.
* Use of `write`, `va_list`, `va_start`, `va_end`.
* Supported format specifiers:

  * `%c` : character
  * `%s` : string
  * `%d` and `%i` : signed integers
  * `%%` : percent symbol
* No handling of flags, field width, precision, or length modifiers.

---

## Compilation

To compile all project files:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf
```

---

## Files

| File                 | Description                                                                                 |
| -------------------- | ------------------------------------------------------------------------------------------- |
| `_printf.c`          | Main `_printf` function that parses the format string and calls the corresponding handlers. |
| `main.c`             | Test file containing various `_printf` and `printf` calls.                                  |
| `main.h`             | Main header containing function prototypes and the `specifier_t` struct.                    |
| `print_char.c`       | Contains `print_char` and `print_string` for `%c` and `%s`.                                 |
| `print_di_spec.c`    | Contains `print_int` for `%d` and `%i`.                                                     |
| `_putchar.c`         | Utility function `_putchar` to write a single character.                                    |
| `handle_specifier.c` | `handle_specifier` function that calls the correct handler based on the format specifier.   |

---

## Man Page

The man page is available as `man_3_printf`.
It documents:

* Supported format specifiers
* Function arguments
* Return value (number of characters printed)

Example usage:

```bash
man ./man_3_printf
```

---

## Testing

The `main.c` file contains test cases for:

* Simple strings
* Characters and strings
* Positive and negative integers
* Percent symbol (`%`) and unknown specifiers

To test your implementation:

```bash
./printf
```

Compare the output with the standard `printf` to ensure correctness.

---

## Compile and Run

1. Compile the project:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf
```

2. Run the tests:

```bash
./printf
```

3. Verify the output for each specifier and compare it with the standard `printf`.

---
**Note:** This project is designed to be **modular**, with each type of specifier handled in its own file, making it easy to maintain and extend `_printf` to additional formats in the future.
---
## Flowchart of Ryan and Ilan printF

<img width="2048" height="714" alt="image" src="https://github.com/user-attachments/assets/7a5ae71f-6983-4082-be2d-4d172de689c6" />
