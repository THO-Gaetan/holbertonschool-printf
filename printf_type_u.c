#include "main.h"

int printf_u(va_list args)
{
	return (printf_u_helper(va_arg(args, unsigned int)));
}

int printf_u_helper(unsigned int i)
{
	unsigned int n = 0;

	if (i < n)
	{
		i = -i;
	}
	if (i / 10)
		n += printf_u_helper(i / 10);
	n += _putchar((i % 10) + '0');
	return (n);
}