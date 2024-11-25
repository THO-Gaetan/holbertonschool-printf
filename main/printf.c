#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *str;

	if (format == 0)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == c)
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				i++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char*);
				write(1, str++, 1);
				i++;
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
			}
		}
		else
			_putchar(format[i]);
	i++;
	}
	va_end(args);
	return (i - 1);
}
