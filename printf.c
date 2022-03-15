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
		{'\0', NULL}
};
	va_start(p, format);
	if (format == NULL)
<<<<<<< HEAD
	{
		return (-1);
	}
=======
	{return (-1); }
>>>>>>> 483bbe0050103db2e3915e43a232b8c84a83bf93
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			flag = 1;
			if (format[i + 1] == '\0')
<<<<<<< HEAD
			{
				return (-1);
			}
=======
			{	return (-1); }
>>>>>>> 483bbe0050103db2e3915e43a232b8c84a83bf93
			i++;
			for (j = 0; selector[j].c != '\0'; j++)
			{
				if (format[i] == selector[j].c)
<<<<<<< HEAD
				{
					s += selector[j].f(p);
					flag = 0;
				}
=======
				{	s += selector[j].f(p);
					flag = 0; }
>>>>>>> 483bbe0050103db2e3915e43a232b8c84a83bf93
		}
		}
		else
		{
			_putchar(format[i]);
			s++;
<<<<<<< HEAD
			flag = 0;
		}
=======
			flag = 0; }
>>>>>>> 483bbe0050103db2e3915e43a232b8c84a83bf93
		if (flag == 1)
		{
			i--;
			_putchar(37);
<<<<<<< HEAD
			s++;
		}
=======
			s++; }
>>>>>>> 483bbe0050103db2e3915e43a232b8c84a83bf93
	}
	return (s);
}
