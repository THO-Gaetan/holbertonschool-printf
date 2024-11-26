#include "main.h"
/**
 * printf_write - Selects the appropriate function to handle a format specifier
 * @i: Index of the current character in the format string
 * @format: The format string
 * @args: List of arguments to be formatted
 *
 * Return: The number of characters printed
 */
int printf_write(int i, const char *format, va_list args)
{
	format_manager_t managers[] = {
	{'c', printf_char},
	{'s', printf_str},
	{'d', printf_int},
	{'i', printf_int},
	{'%', printf_percent},
	{0, NULL}
};
	int n = 0, j;

	for (j = 0; managers[j].specifier != 0; j++)
	{
		if (format[i] == managers[j].specifier)
		{
			n += managers[j].manager(args);
			break;
		}
	}
	if (managers[j].specifier == 0)
	{
		n += _putchar('%');
		n += _putchar(format[i]);
	}
	return (n);
}
