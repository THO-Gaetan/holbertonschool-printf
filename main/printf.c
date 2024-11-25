#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *str;

	if (format == NULL)
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
				write(1, &c, 1);
				i++;
				break;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char*);
				write(1, &str, char*);
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
