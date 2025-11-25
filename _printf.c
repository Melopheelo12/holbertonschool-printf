#include "main.h"

/**
 * _printf - reproduction simplifiée de printf
 * @format: chaîne de format
 *
 * Return: nombre de caractères imprimés
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			count += handle_specifier(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}

		i++;
	}

	va_end(args);
	return (count);
}
