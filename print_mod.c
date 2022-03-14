#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_mod - print mod
 * @p: parameters
 * Return: 1
 */
int print_mod(va_list p)
{
	char c = va_arg(p, int);
	(void)(c);

	_putchar(37);
	return (1);
}
