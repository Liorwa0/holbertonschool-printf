# 0x11. C - printf

## Description
This project is a custom implementation of the C standard library function `printf`. The function `_printf` formats and prints data to the standard output stream (`stdout`) according to a specified format format string. This project is completed as part of the Software Engineering curriculum at Holberton School / Tuwaiq Academy.

---

## Authorized Functions & Macros
- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

---

## Compilation
All files are compiled on **Ubuntu 20.04 LTS** using `gcc` with the following flags:
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
