#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - function printf
 * @format: parameters
 * Return: i
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, s = 0, flag  = 1;
	va_list p;
	op_t selector[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_mod},
		{'d', print_integer}, {'i', print_integer}, {'u', print_unsigned},
		{'\0', NULL}};
	va_start(p, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			flag = 1;
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			for (j = 0; selector[j].c != '\0'; j++)
				if (format[i] == selector[j].c)
				{
					s += selector[j].f(p);
					flag = 0;
				}
		}
		else
		{
			_putchar(format[i]);
			s++;
			flag = 0;
		}
		if (flag == 1)
		{
			i--;
			_putchar(37);
			s++;
		}
	}
	return (s);
}
