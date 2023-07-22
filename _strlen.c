#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s : pointer to a constant string.
 * Return: len; length of string str.
 */
int _strlen(const char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
