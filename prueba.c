#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 */
int print_char(va_list l)
{	
	char a;

	a = va_arg(l, int);
	_putchar (a);
	return (1);
}
/**
*/
int print_string(va_list l)
{
	char *b = va_arg(l, char *);
	int i = 0;

	for (i = 0; b[i]; i++)
		_putchar(b[i]);
	return(i);
}
/**
 */
int print_mod(va_list l)
{
	char b = va_arg(l, int);

	_putchar(b);
	return (1);
}
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
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;

	va_list p;

	op_t selector[] = {

		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_decimal},
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
