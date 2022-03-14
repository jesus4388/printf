#include <stdarg.h>
#include "main.h"
/**
 * print_char - 
 * @l: list
 */
int print_char(va_list l)
{
        char a = va_arg(l, int);

        _putchar (a);
        return (1);
}
