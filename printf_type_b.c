#include "main.h"
/**
 * printf_b - Prints a binary integer
 * @args: Argument list containing the unsigned integer to  convert.
 * Description: we are calling the printf_b_helper function and we give
 * it the args data as a parameter
 * Return: The number of characters printed
 */
int printf_b(va_list args)
{
	return (printf_b_helper(va_arg(args, int)));
}
/**
 * printf_b_helper - Helper function to print a binary integer recursively
 * @i: Argument list containing the decimal unsigned integer to convert.
 * Description: in this function we divide i per 2 until it is equal to 0
 * with the help of a recusrive function, then for every value of i we got
 * we print the result of i modulo 2.
 * Return: The number of characters printed
 */
int printf_b_helper(int i)
{
	int n = 0;
	int j;

	if (i > 0)
	{
		j = 1;
		n += printf_b_helper(i / 2);
		n += _putchar((i % 2) + '0');
	}
	if (i == 0 && j == 0)
		n += _putchar('0');
	return (n);
}
