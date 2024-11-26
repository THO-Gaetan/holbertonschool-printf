#include "main.h"
/**
 * printf_char - Prints a character
 * @args: Argument list containing the character to print
 *
 * Return: The number of characters printed (always 1)
 */
int printf_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
 * printf_str - Prints a string
 * @args: Argument list containing the string to print
 *
 * Return: The number of characters printed
 */
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
/**
 * printf_percent - Prints a percent sign
 * @args: Argument list (unused)
 *
 * Return: The number of characters printed (always 1)
 */
int printf_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
/**
 * printf_int - Prints an integer
 * @args: Argument list containing the integer to print
 *
 * Return: The number of characters printed
 */
int printf_int(va_list args)
{
	return (printf_int_helper(va_arg(args, int)));
}
/**
 * printf_int_helper - Helper function to print an integer recursively
 * @i: The integer to print
 *
 * Return: The number of characters printed
 */
int printf_int_helper(int i)
{
	int n = 0;
	unsigned int sum;

	if (i < 0)
	{
		sum = -i;
		_putchar('-');
	}
	else sum = n;
	if (sum / 10)
		n += printf_int_helper(sum / 10);
	n += _putchar((sum % 10) + '0');
	return (n);
}
