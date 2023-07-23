#include "main.h"
/**
 * _puts - prints a string to stdout and return its length.
 * @str : pointer to string.
 * Return: Length of string..
 */
int _puts(const char *str)
{
	int i;
	int len  = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
		len++;
	}
	return (len);
}
