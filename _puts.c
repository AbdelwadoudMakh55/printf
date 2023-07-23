#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to stdout and return its length.
 * @str : pointer to string.
 * Return: Length of string..
 */
int _puts(char *str)
{
	int i;
	int len  = 0;

	if (str == NULL)
		_puts("(null)");
	else
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			_putchar(*(str + i));
			len++;
		}
	}
	return (len);
}
