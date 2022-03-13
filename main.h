#ifndef estructura
#define estructura
typedef struct op
{
	char c;
	int (*f)(va_list p);
}op_t;
int _printf(const char *format, ...);
int _putchar(char c);
#endif
