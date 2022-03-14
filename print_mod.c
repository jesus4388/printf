#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_mod - 
 * @l:
 * @c: 
 */
int print_mod(va_list p)
{
        char c = va_arg(p, int);
        (void)(c);

        _putchar(37);
        return (1);
}
