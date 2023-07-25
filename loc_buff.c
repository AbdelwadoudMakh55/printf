#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: char to print
 * Return: 1 (success).
 * Description: _write uses a local buffer of 1024.
 */
int _write(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
