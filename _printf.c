#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 */
void print_char(va_list c)
{
	printf("%d", va_arg(int, c);
}
/**
*/
void print_string(va_list s)
{
	printf("%s", va_arg(char, s);
}
/**
 */
void print_porcent(va_list )
{
	printf("%C", va_arg(char, %%);
}
/**
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;

	va_list (p, format);

	op_t selector[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_porcent},
		{NULL, NULL}
	};
	va_start(p, format);
	while (format != NULL && format[i] != NULL)
	{
		j = 0;
		while (selector[j] != NULL)
		{
			if (selector[j].c == format[i])
			{
			selector[j].f(p);
			}
			j++;
		}
		i++;
	}
	va_end(p);
}
