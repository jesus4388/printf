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
	int aux;
	int c = 1;
	int i = 1;

	int n = va_arg(l, int);

	aux = n;
	if (n < 0)
	{
		i = 2;
		_putchar(45);
		while (aux <= -10)
		{
			aux /= 10;
			c *= 10;
			i++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar((((n / c) % 10) * -1) + 48);
		}
	}
	else
	{
<<<<<<< HEAD
		_putchar('-');
		c = (c * -1);
<<<<<<< HEAD
=======
		i++;
>>>>>>> 483bbe0050103db2e3915e43a232b8c84a83bf93
=======
		while (aux >= 10)
		{
			aux /= 10;
			c *= 10;
			i++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar(((n / c) % 10) + 48);
		}
>>>>>>> 3a8520ef5e80031816d840ecff97553ba4781f3f
	}
	return (i);
}
