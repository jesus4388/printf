#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_unsigned - print unsigned
 * @l: pointer
 * Return: strlen
 */
int print_unsigned(va_list l)
{
	unsigned int c = va_arg(l, unsigned int);
	int j = 1;
	unsigned int h = 0;
	char *aux;

	h = c;

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
