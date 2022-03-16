#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - binary
 * @l: strlen
 * Return: 0
 */
int conver(int n)
{
	int i = 1;

	if (n / 2)
	{
		conver(n / 2);
		_putchar ((n % 2) + 48);
	}
	else
	{
		_putchar ((n % 2) + 48);
	}
	while (n >= 0) 
	{
		n /= 10;
		i++;
	}
	return (i);
}
/**
 * print_binary - print binary
 * @l: va list
 * Return: l
 */
int print_binary(va_list l)
{
	int n = va_arg(l, int);

	conver(n);

return (0);
}
