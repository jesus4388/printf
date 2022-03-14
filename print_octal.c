#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_octal - 
 * @l:
 * @j:
 * @i:
 * @b:
 * @aux:
 * @h:
 */
int print_octal(va_list l)
{
        unsigned int c = va_arg(l, unsigned int);
        int j = 1;
        int i = 0;
        int b = 0;
        unsigned int h = 0;
        char *aux = NULL;
        h = c;

        while (h > 8)
        {
                h = h / 8;
                j++;
                printf("hola, soy h, *%d* hola soy j: *%d*\n", h, j);
        }
        printf ("j mide esto antes de hacer el malloc %d\n", j);
        aux = malloc(j * sizeof(int));
        printf ("largo aux, %i\n", (strlen(aux) - 1));
        for (i = 0; c >= 8; i++)
        {
                aux[i] = c % 8;
                c = c / 8;
                /**printf("holis soy c %u\n", c);
                printf("holis soy aux %d\n", c % 8);*/
                /*printf ("largo j, %i\n", j);
                printf ("largo aux, %i\n", (strlen(aux) - 1));*/
        }
        printf("largoooo, %d\n", (strlen(aux) - 1));
        for (b = (strlen(aux) - 1); b >= 0; b--)
        {
                printf("holis, %u\n", j);
                _putchar(aux[b] + '0');
        }
        free (aux);
        return (strlen(aux) - 1);
}

