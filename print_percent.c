#include "main.h"
/**
 * print_percent - prints a '%' character
 * @args: argument list (unused)
 *
 * Return: always 1
 */
 int print_percent(va_list args)
 {
	(void)args;
	write(1, "%", 1);
	return 1;
 }