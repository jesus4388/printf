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
<<<<<<< HEAD
} op_t;

=======
}op_t;
>>>>>>> cb9c75820f75fc4bc0429cb2e5b839292b7993e0
int _printf(const char *format, ...);
int _putchar(char c);

#endif /*_PRINTF_H */
