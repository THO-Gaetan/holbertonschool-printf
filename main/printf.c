#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	char c;
	char *str;

	if (format == 0)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		_putchar(format[i]);
		if (format[i] == '%')
		{
			if (format[i + 1] == c)
			{
				c = va_arg(args, int);
				count += write(1, &c, 1);
				i++;
				break;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char*);
				count += write(1, str++, 1);
				i++;
				break;
			}
			else
				return (0);
		}
	i++;
	}
	return (i);
}
