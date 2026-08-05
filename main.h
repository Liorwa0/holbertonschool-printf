#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>   /* <-- أضيفي هذا */

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *str);

#endif
