#include "main.h"
#include <stdio.h>

/**
 * lower_hex_int - Handles conversion specifier "x"
 * @buffer: Pointer to struct buffer
 * @g: the integer to be converted to lowercase hex
 *
 * Return: Pointer to struct buffer.
 */
struct buffer lower_hex_int(struct buffer *buffer, va_list g)
{
    int n, i, len;
    char rev_hex[100];

    n = va_arg(g, int);

    if (n == 0)
    {
        // Handle the special case when n is 0
        buffer->array[0] = '0';
        buffer->array++;
        buffer->size++;
        return *buffer;
    }

    len = 0;
    while (n)
    {
        i = n % 16;

        if (i < 10)
        {
            rev_hex[len] = i + '0';
            len++;
        }
        else
        {
            rev_hex[len] = i + 'a' - 10;
            len++;
        }

        n /= 16;
    }

    len--;
    while (len >= 0)
    {
        buffer->array[buffer->size] = rev_hex[len];
        buffer->size++;
        len--;
    }

    return *buffer;
}
