#include "main.h"

/**
 * print_char - imprime un caractère
 * @args: liste d’arguments
 *
 * Return: 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * print_string - imprime une chaîne de caractères
 * @args: liste d’arguments
 *
 * Return: nombre de caractères imprimés
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}