#ifndef estructura
#define estructura
typedef struct op
{
	char c;
		void (*f)(va_list p);
}op_t;
int _printf(const char *format, ...);
#endif
