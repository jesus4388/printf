#ifndef _PRINTF_H_
#define _PRINTF_H_
#include <stdarg.h>
/**
 * struct op - structure for printing various types 
 * @c: 
 * @p:
*/
typedef struct op
{
	char c;
	int (*f)(va_list p);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif /*_PRINTF_H */
