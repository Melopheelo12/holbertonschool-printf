#include "main.h"

/**
 * print_int - prints integers
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);

	return (print_number(n));
}