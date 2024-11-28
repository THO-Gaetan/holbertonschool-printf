#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
/**
 * struct format_managers - Struct to map format specifiers to functions
 * @specifier: The format specifier character (e.g., 'c', 's', 'd', 'i', '%')
 * @manager: Pointer to the function that handles the specifier
 */
typedef struct format_managers
{
	char specifier;
	int (*manager)(va_list);
} format_manager_t;

int printf_char(va_list args);
int printf_str(va_list args);
int printf_int(va_list args);
int printf_percent(va_list args);
int printf_u(va_list args);
int printf_o(va_list args);
int printf_x(va_list args);
int printf_int_helper(int i);
int printf_u_helper(unsigned int i);

int _putchar (char c);
int printf_char(va_list args);
int printf_str(va_list args);
int printf_int(va_list args);
int printf_write(int i, const char *format, va_list args);
int _printf(const char *format, ...);

#endif
