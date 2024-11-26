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

	if (format == 'd' || format == 'i')
		n += printf_int_helper(va_arg(args, int));
	return (n);
}

int printf_int_helper(int i)
{
	int n = 0;

	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}
	if (i >= 10)
		n += printf_int_helper(i / 10);
	n += _putchar((i % 10) + '0');
	return (n);
}
