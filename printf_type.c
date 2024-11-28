#include "main.h"
/**
 * printf_char - Prints a character
 * @args: Argument list containing the character to print
 * description: write with the help of the _putchar fonction the
 * character stored inside args.
 * Return: The number of characters printed (always 1)
 */
int printf_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
 * printf_str - Prints a string
 * @args: Argument list containing the string to print
 * description: write the whole string that is stored inside of the args
 * we also check if the str is null, if it is we print (null)
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
 * Description: we just print a % with the help of the _putchar function,
 * we ignore the args parameter cause we don't need it.
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
 * Description: we are calling the printf_int_helper function and we give
 * it the args data as a parameter
 * Return: The number of characters printed
 */
int printf_int(va_list args)
{
	return (printf_int_helper(va_arg(args, int)));
}
/**
 * printf_int_helper - Helper function to print an integer recursively
 * @i: The integer to print
 * Description: we are checking if the integrer is negative or not, if it is
 * we write a negative character and modify the negative number as a positive
 * inside an unsigned int variable to avoid error on large number.
 * if it's positive we just give the variable i to the unsigned int variable
 * for the same reason. we then create a recursive function to write one by
 * one every number in the varible sum in the good order.
 * Return: The number of characters printed
 */
int printf_int_helper(int i)
{
	int n = 0;
	unsigned int sum;

	if (i < 0)
	{
		n += _putchar('-');
		sum = -i;
	}
	else
		sum = i;
	if (sum / 10)
		n += printf_int_helper(sum / 10);
	n += _putchar((sum % 10) + '0');
	return (n);
}
