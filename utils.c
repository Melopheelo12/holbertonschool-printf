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


int handle_specifier(char c, va_list args)
{
	switch (c)
	{
		case 'c': return print_char(args);
		case 's': return print_string(args);
		case 'd':
		case 'i': return print_int(args);
		case '%': write(1, "%", 1); return 1;
		default:
			write(1, "%", 1);
			write(1, &c, 1);
			return 2;
	}
}