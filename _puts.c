#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _puts - prints a string to stdout and return its length.
 * @s : String.
 * Return: Length of string..
 */
int _puts(char *s)
{
	int i;
	int len  = 0;

	if (s == NULL)
	{
		_puts("(null)");
		return (6);
	}
	else
	{
		for (i = 0; *(s + i) != '\0'; i++)
		{
			_putchar(*(s + i));
			len++;
		}
	}
	return (len);
}
