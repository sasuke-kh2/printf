#include "main.h"
#include <stdlib.h>

/**
 * print_unoc - doc
 * @ag: doc
 * @n_c: doc
 */

void print_unoc(va_list ag, int *n_c)
{
	*n_c += print_un_oc(va_arg(ag, int));
}

/**
 * print_un_oc - prints an givan integer
 * @num: given int
 * Return: integer length
 */

int print_un_oc(unsigned int num)
{
	char buffer[20];
	int index = 0;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buffer[index++] = '0' + (num % 8);
		num /= 8;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (index);
}
