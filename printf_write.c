#include "main.h"

int printf_write(char format, va_list args)
{
	int n = 0;

	if (format == 'c')
		n += printf_char(format, args);
	else if (format == 's')
		n += printf_str(format, args);
	else if (format == 'd')
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
	if (format == 'd')
		n += write(1, &i, 4);
	return (n);
}
