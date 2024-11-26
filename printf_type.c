#include "main.h"

int printf_char(char format, va_list args)
{
	int n = 0;

	if (format == 'c')
		n += _putchar(va_arg(args, int));
	return (n);
}

int printf_str(char format, va_list args)
{
	int n = 0;
	char *str;

	if (format == 's')
	{
	str = va_arg(args, char*);
	if (!str)
		str = "(null)";
	while (*str)
	{
		n += _putchar(*str);
		str++;
	}
	}
	return (n);
}

int printf_int(char format, va_list args)
{
	int n = 0;
	int i;

	i = va_arg(args, int);
	if (format == 'd' || format == 'i')
		n += write(1, &i, 4);
	return (n);
}
