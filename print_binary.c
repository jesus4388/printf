#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * conver - binary
 * @n: va_list
 */
void conver(unsigned int n)
{

	if (n / 2)
	{
		conver(n / 2);
		_putchar ((n % 2) + 48);
	}
	else
	{
		_putchar ((n % 2) + 48);
	}
}
/**
 * print_binary - print binary
 * @l: va list
 * Return: l
 */
int print_binary(va_list l)
{
	int i = 1;
	unsigned int n = va_arg(l, unsigned int);

	conver(n);
		while (n / 2)
		{
			n = n / 2;
			i++;
		}
	return (i);
}
