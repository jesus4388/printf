#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_integer - print integer
 * @l: strlen
 * Return: 0
 */
int print_integer(va_list l)
{
	int c = va_arg(l, int);
	int j = 1;
	int i = 1;
	int h = 0;
	char *aux;

	h = c;

	if (c == 0)
	{
		_putchar('0');
		return (1);
	}
	if (c < 0)
	{
		_putchar('-');
		c = (c * -1);
<<<<<<< HEAD
=======
		i++;
>>>>>>> 483bbe0050103db2e3915e43a232b8c84a83bf93
	}
	while (h / 10)
	{
		h = h / 10;
		j++;
	}
	aux = malloc(j);
	for (j = 0; c != 0; j++)
	{
		aux[j] = c % 10;
		c = c / 10;
	}
	for (j = (strlen(aux) - 1); j >= 0; j--)
	{
		_putchar(aux[j] + '0');
		i++;
	}
	i -= 1;
	free(aux);
	return (i);
}
