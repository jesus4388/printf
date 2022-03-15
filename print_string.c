#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_string - print string
 * @l: pointer
 * Return: i
 */
int print_string(va_list l)
{
	char *b = va_arg(l, char *);
	int i = 0;
	char c[] = {"(null)"};

	if (b == NULL)
	{
		for (i = 0; c[i]; i++)
			_putchar(c[i]);
		return (i);
	}
	else
	{
		for (i = 0; b[i]; i++)
			_putchar(b[i]);
		return (i);
	}
}
