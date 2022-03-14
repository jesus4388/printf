#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
/**
 * struct op - structure for printing various types 
 * @c: char
 * @p: list of data
*/
typedef struct op
{
	char c;
	int (*f)(va_list p);
}op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list l);
int print_string(va_list l);
int print_mod(va_list p);
int print_decimal(va_list l);
int print_integer(va_list l);
int print_unsigned(va_list l);
int print_octal(va_list l);

#endif /*_PRINTF_H */
