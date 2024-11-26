#include "main.h"

int printf_write(char format, va_list args)
{
	int n = 0;

	if (format == 'c')
		n += printf_char(format, args);
	else if (format == 's')
		n += printf_str(format, args);
	else if (format == 'd' || format == 'i')
		n += printf_int(format, args);
	else if (format == '%')
		n += _putchar('%');
	else
	{
		n += _putchar('%');
		n += _putchar(format);
	}
	return (n);
}
