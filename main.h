#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

typedef struct format_managers
{
    char specifier;
    int (*manager)(va_list);
} format_manager_t;

int printf_char(va_list args);
int printf_str(va_list args);
int printf_int(va_list args);
int printf_percent(va_list args);
int printf_int_helper(int i);

int _putchar (char c);
int printf_char(va_list args);
int printf_str(va_list args);
int printf_int(va_list args);
int printf_write(int i, const char *format, va_list args);
int _printf(const char *format, ...);

#endif
