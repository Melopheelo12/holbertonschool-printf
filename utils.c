#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: char to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - prints an integer
 * @n: number
 * Return: number of chars printed
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += print_number(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}

/**
 * handle_specifier - Selects the correct function for a format specifier
 * @c: The format specifier character
 * @args: The list of arguments passed to the function
 *
 * Return: The number of characters printed by the corresponding function,
 * or 2 if the specifier is unknown (prints '%' and the unknown character).
 */
int handle_specifier(char c, va_list args)
{
	specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', print_percent},
		{'\0', NULL}
		};

		int i = 0;
		while (specifiers[i].spec != '\0')
		{
			if (specifiers[i].spec == c)
				{
					return specifiers[i].f(args);
				}
				i++;
		}

			write(1, "%", 1);
			write(1, &c, 1);
			return 2;
	}
