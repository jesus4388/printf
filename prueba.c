<<<<<<< HEAD
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 */
int print_decimal(va_list l)
{
	int c = va_arg(l, int);
	int j = 1;
	int h = 0;
	char *aux;

	if (c < 0)
	{
		_putchar('-');
		c = (c * -1);
	}
	while (h / 10)
	{
		h = h /10;
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
	free (aux);
	return (strlen(aux) - 1);
}
/**
 */
 int print_hexa(char *format, va_list p)
{
	int c2 = va_arg (1, int);
	int j2 = 1;
	int h2 = 0;
	char *aux2;
	h2 = c2

	if (c2 < 0)
{
	_putchar ('_');
	c2 = (c2* - 1);
}
	while (h2 / 10)
{
	h2 = h / 10;
	j++;
}
	aux2 = malloc(j2);
	for (j2 = 0; c2 != 0; j++)
{
	aux2[j] = c2 % 16;
	c2 = c2 / 16;
}
	for (j2 = (strlen(aux2) - 1); j2 >= 0; j--)
{
	_putchar(aux2[j2] + '0');
}
{
	free(aux2);
	return (strlen(aux2) - 1);
	}
}
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;

	va_list p;

	op_t selector[] = {

		{'d', print_decimal},
		{'i', print_decimal},
		{'x', print_hexa},
		{'\0', NULL}

	};

	va_start (p, format);

	while (format[i] != '\0' && format[i] != '\0')
	{
		j = 0;
		if (format[i] != '%')
		{
			_putchar (format[i]);
			i++;
		}

		else
		{
			i++;
			while (selector[j].c != '\0')
			{
				if (format[i] == selector[j].c)
				{
					selector[j].f(p);
					i++;
				}
			j++;
			}
		}
	}
	va_end(p);
	return (i);
}
=======

hello

>>>>>>> a6babc3476798997f1f085809957764ad8e9d841
