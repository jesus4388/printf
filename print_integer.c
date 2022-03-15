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
	int n = va_arg(l, int);
	int aux;
	int c = 1;
	int j = 1;

	aux = n;
	if (n < 0)
	{
		j = 2;
		_putchar(45);
		while (aux <= -10)
		{
			aux /= 10;
			c *= 10;
			j++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar((((n / c) % 10) * -1) + 48);
		}
	}
	else
	{
		while (aux >= 10)
		{
			aux /= 10;
			c *= 10;
			j++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar(((n / c) % 10) + 48);
		}
	}
	return (j);
}
