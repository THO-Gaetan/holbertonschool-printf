#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	if (format == 0)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char*);
				if (!str)
					str = "(nil)";
				while (*str)
				{
					_putchar(*str);
					str++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
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
