#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: A character string containing zero or more directives
 * Description: first thing in the function, we check if the parameter format
 * is null, if it is we return an error, else we are looking for a % char in
 * the format, once we find it we check if the next char is null or not, if
 * it is we return an error, if it's not null we start the print_write.
 * if we don't find a '%' we keep printing the char of the format variable.
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
			if (format[i] == 0)
			{
				va_end(args);
				return (-1);
			}
			n += printf_write(i, format, args);
		}
		else
			n += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (n);
}
