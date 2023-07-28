#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - Print strings and chars.
 * @format : Format specifier.
 * Return: Length of the printed variables.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, len = 0;
	int (*function)(va_list);

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				len += _putchar('%');
			if (format[i] != '\0' && format[i] != '%')
			{
				if (format[i] == 'l' || format[i] == 'h')
					i++;
				function = get_fun(format[i]);
				if (function != NULL)
					len += function(list);
				else
				{
					len += _putchar('%');
					len += _putchar(format[i]);
				}
			}
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (len);
}
