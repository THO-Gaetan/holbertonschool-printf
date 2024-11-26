#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 *
 * Return: The number of characters printed (excluding the null byte
 * used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, n = 0;

	if (format == 0)
	{
		return (-1);
	}
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			n += printf_write(i, format, args);
		}
		else
			n += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (n);
}
