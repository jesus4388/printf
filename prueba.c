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
	char a = va_arg(l, int);

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
int print_mod(va_list p)
{
	char c = va_arg(p, int);
	(void)(c);

	_putchar(37);
	return (1);
}
/**
 */
int print_decimal(va_list l)
{
	int c = va_arg(l, int);
	int j = 1;
	int h = 0;
	char *aux;

	h = c;

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
int print_integer(va_list l)
{
	int c = va_arg(l, int);
	int j = 1;
	int h = 0;
	char *aux;
	
	h = c;
	
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
int print_unsigned(va_list l)
{
	unsigned int c = va_arg(l, unsigned int);
	int j = 1;
	unsigned int h = 0;
	char *aux;

	h = c;

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

int print_octal(va_list l)
{
	unsigned int c = va_arg(l, unsigned int);
	int j = 1;
	int i = 0;
	int b = 0;
	unsigned int h = 0;
	char *aux = NULL;

	h = c;

	while (h > 8)
	{
		h = h / 8;
		j++;
		printf("hola, soy h, *%d* hola soy j: *%d*\n", h, j);
	}
	printf ("j mide esto antes de hacer el malloc %d\n", j);
	aux = malloc(j * sizeof(int));
	printf ("largo aux, %i\n", (strlen(aux) - 1));
	for (i = 0; c >= 8; i++)
	{
		aux[i] = c % 8;
		c = c / 8;
		/**printf("holis soy c %u\n", c);
		printf("holis soy aux %d\n", c % 8);*/
		/*printf ("largo j, %i\n", j);
		printf ("largo aux, %i\n", (strlen(aux) - 1));*/
	}
	printf("largoooo, %d\n", (strlen(aux) - 1));
	for (b = (strlen(aux) - 1); b >= 0; b--)
	{
		printf("holis, %u\n", j);
		_putchar(aux[b] + '0');
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
		{'i', print_integer},
		{'u', print_unsigned},
		{'o', print_octal},
		{'\0', NULL}

	};

	va_start (p, format);

	while (format != NULL && format[i] != '\0')
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
			while(selector[j].c != '\0')
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
