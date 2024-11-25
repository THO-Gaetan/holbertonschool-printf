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
			switch (format[i + 1])
			{
				case 'c':
				{
					c = va_arg(args, int);
					write(1, &c, 1);
					i++;
					break;
				}
				case 's':
				{
					str = va_arg(args, char*);
					write(1, &str, char*);
					i++;
					break;
				}
				default:
				return (0);
			}
		}
	i++;
	}
}
