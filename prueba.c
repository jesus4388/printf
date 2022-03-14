#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 */
void print_char(va_list f)
{	
	char a;

	a = va_arg(f, int);
	_putchar (a);
}
/**
 */
void print_string(va_list s)
{
	char *b = va_arg(s, char *);
	int i = 0;

	for (i = 0; b[i]; i++)
		_putchar(b[i]);
}
/**
 */
int print_mod(va_list)(void)
{
	_putchar(37);
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
		if (format[i + 1] == '%')
		i += 2;

		else
		{
			i++;
			while (selector[j].c != '\0')
			{
				if (selector[j].c == format[i])
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
