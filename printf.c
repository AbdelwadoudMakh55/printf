#include "stdarg.h"
#include "main.h"
#include <stdio.h>
/**
 * _printf - Print strings and chars.
 * @format : Format specifier.
 * Return: Length of the printed variables.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	int len  = 0;

	va_start(list, format);
	if (format != NULL)
	{
		while (format[i] != '\0' && i <= _strlen(format) - 1)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				len++;
				i++;
			}
			else if (format[i] == '%' && format[i + 1] == 'c')
			{
				len += print_c(va_arg(list, int));
				i += 2;
			}
			else if (format[i] == '%' && format[i + 1] == 's')
			{
				len += print_s(va_arg(list, char *));
				i += 2;
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar('%');
				len++;
				i += 2;
			}
		}
	}
	return (len);
}
