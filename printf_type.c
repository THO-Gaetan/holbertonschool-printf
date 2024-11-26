#include "main.h"

int printf_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

int printf_str(va_list args)
{
	int n = 0;
	char *str;

	str = va_arg(args, char*);
	if (!str)
		str = "(null)";
	while (*str)
	{
		n += _putchar(*str);
		str++;
	}
	return (n);
}

int printf_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

int printf_int(va_list args)
{
	return (printf_int_helper(va_arg(args, int)));
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
