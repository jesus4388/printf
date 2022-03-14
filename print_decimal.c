#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_decimal - print decimal
 * @l: parameters
 * Return: long
 */
int print_decimal(va_list l)
{
	int c = va_arg(l, int);
	int j = 1, h = 0;
	char *aux;

	h = c;

	if (c < 0)
	{
		_putchar('-');
		c = (c * -1);
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
	}
	free(aux);
	return (strlen(aux) - 1);
}
