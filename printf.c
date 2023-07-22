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
	char *string;
	int char1;

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
				char1 = va_arg(list, int);
				if (char1 >= 32 && char1 <= 126)
				{
					len += _putchar(char1);
					i += 2;
				}
			}
			else if (format[i] == '%' && format[i + 1] == 's')
			{
				string = va_arg(list, char *);
				if (string != NULL)
				{
					len += _puts(string);
					i += 2;
				}
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				_putchar(format[i + 1]);
				len++;
				i += 2;
			}
		}
	}
	return (len);
}
