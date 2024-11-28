#include "main.h"
/**
 * printf_write - Selects the appropriate function to handle a format specifier
 * @i: Index of the current character in the format string
 * @format: The format string
 * @args: List of arguments to be formatted
 * description: in the write function we initialize the Handler variable that
 * is looking for the structure data, we then write loop and condition around
 * that variable, to check if the specifier is the same as the actual format
 * character for every position we have inside the Handler, if we found a
 * matching character we use the function that work together with the specifier
 * if the specifier and the format don't match, we just print per default a '%'
 * and the actual format character.
 * Return: The number of characters printed
 */
int printf_write(int i, const char *format, va_list args)
{
	format_manager_t Handler[] = {
	{'c', printf_char},
	{'s', printf_str},
	{'d', printf_int},
	{'i', printf_int},
	{'b', printf_b},
	{'u', printf_u},
	{'%', printf_percent},
	{0, NULL}
};
	int n = 0, j;

	for (j = 0; Handler[j].specifier != 0; j++)
	{
		if (format[i] == Handler[j].specifier)
		{
			n += Handler[j].manager(args);
			break;
		}
	}
	if (Handler[j].specifier == 0)
	{
		n += _putchar('%');
		n += _putchar(format[i]);
	}
	return (n);
}
