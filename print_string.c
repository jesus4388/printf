#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_string - 
 * @*b:
 * @l:
 * @i:
 */
int print_string(va_list l)
{
        char *b = va_arg(l, char *);
        int i = 0;

        for (i = 0; b[i]; i++)
                _putchar(b[i]);
        return(i);
}