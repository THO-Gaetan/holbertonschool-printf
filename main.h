#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar (char c);
int printf_char(char format, va_list args);
int printf_str(char format, va_list args);
int printf_int(char format, va_list args);
int printf_int_helper(int i);
int printf_write(char format, va_list args);
int _printf(const char *format, ...);

#endif
