#include <stdarg.h>
#include "main.h"
/**
 * print_octal - the base is 8
 * @l:
 * @i:
 * @c:
 * @p:
 * @aux:
 */
int print_octal(va_list l)
{
	unsigned int p = va_arg(l, unsigned int);
	int  i = 0;
	char aux *;

	c = p;
	for (i = 0; c > 0; i++)
		c / 8;
	aux = malloc(i);
	c = p;
	for (i = 0; aux[i]; i++)
	{
		aux[i] = c % 8;
		c = c / 8;
	}
	for (i = 0; aux[i]; i++)
	{
		_putchar(aux[i]);
	}
	free(aux);
	return (i);
}
