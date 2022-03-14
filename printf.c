#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _printf - 
 * @i:
 * @j:
 * @p:
 */
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
		{'i', print_decimal},
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
