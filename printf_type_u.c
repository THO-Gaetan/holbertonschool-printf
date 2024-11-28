#include "main.h"
/**
 * printf_u - Prints an unsigned integer
 * @args: Argument list containing the unsigned integer to print
 * Description: we are calling the printf_u_helper function and we give
 * it the args data as a parameter
 * Return: The number of characters printed
 */
int printf_u(va_list args)
{
	return (printf_u_helper(va_arg(args, unsigned int)));
}
/**
 * printf_u_helper - Helper function to print an unsigned integer recursively
 * @i: Argument list containing the unsigned integer to print
 * Description: at first we are checking if the variable i is negative, if it
 * is negative we turn it to positive, then we use a recursive function to
 * print every number in the good order.
 * Return: The number of characters printed
 */
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
