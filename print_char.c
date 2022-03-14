#include <stdarg.h>
#include "main.h"
/**
 * print_char - print char
 * @l: list
 * Return: 1
 */
int print_char(va_list l)
{
	char a = va_arg(l, int);

	_putchar (a);
	return (1);
}
