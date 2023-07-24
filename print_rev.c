#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s : Pointer to string.
 * Return: void (string in reverse).
 */
int _print_rev_recursion(char *s)
{
	int len = 0;

	if (s == NULL)
		_puts("(null");
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		len += _putchar(*(s - 1));
	}
	return (len);
}
