#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, n = 0;
	char *str;

	if (format == 0)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			n += printf_write(format[i], args)
		}
		else
			n += _putchar(format[i]);
	i++;
	}
	va_end(args);
	return (n);
}
