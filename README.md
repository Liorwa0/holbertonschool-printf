# 0x11. C - printf

## Description
This project is a custom implementation of the C standard library function `printf`. The function `_printf` formats and prints data to the standard output stream (`stdout`) according to a specified format string. 

This is a collaborative project completed as part of the Software Engineering curriculum at **Holberton School / Tuwaiq Academy**.

---

## Technical Requirements & Guidelines
* **Environment:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` using flags `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
* **Style standard:** All C files strictly adhere to the **Betty** coding style guide (validated via `betty-style.pl` and `betty-doc.pl`).
* **Global variables:** Strictly forbidden.
* **Function limit:** No more than 5 functions per file.
* **Header file:** `main.h` contains all function prototypes and is properly protected with include guards (`#ifndef MAIN_H`).

---

## Authorized Functions & Macros
* `write` (`man 2 write`)
* `malloc` (`man 3 malloc`)
* `free` (`man 3 free`)
* `va_start` (`man 3 va_start`)
* `va_end` (`man 3 va_end`)
* `va_copy` (`man 3 va_copy`)
* `va_arg` (`man 3 va_arg`)

---

## Supported Conversion Specifiers

| Specifier | Type / Description | Example Usage | Output |
| :---: | :--- | :--- | :--- |
| **`%c`** | Single character | `_printf("%c", 'A');` | `A` |
| **`%s`** | String of characters | `_printf("%s", "Hello World");` | `Hello World` |
| **`%%`** | Percent sign | `_printf("%%");` | `%` |
| **`%d`** | Signed decimal integer | `_printf("%d", 1024);` | `1024` |
| **`%i`** | Signed integer | `_printf("%i", -762534);` | `-762534` |

---

## File Structure & Organization

| File | Description | Developed By |
| :--- | :--- | :--- |
| **`main.h`** | Header file containing all function prototypes, includes, and `struct` definitions. | Shatha Alghamdi |
| **`_printf.c`** | Main entry function that parses format string and routes specifiers. | Shatha Alghamdi |
| **`functions.c`** | Handler functions for `%c`, `%s`, and `%%` conversion specifiers. | Shatha Alghamdi |
| **`helpers.c`** | Low-level output function (`_putchar`) using standard system call `write`. | Arwa Alhomrani |
| **`print_numbers.c`**| Handler functions for integer conversions (`%d` and `%i`), handling limits. | Arwa Alhomrani |
| **`README.md`** | Comprehensive project documentation and installation guide. | Arwa Alhomrani |

---

## Compilation & Usage

### 1. Clone the repository
```bash
git clone [https://github.com/ghadi0alzhrani0/holbertonschool-printf.git](https://github.com/ghadi0alzhrani0/holbertonschool-printf.git)
cd holbertonschool-printf
