#ifndef PRINTF
#define PRINTF

#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*_get_function(char s))(va_list);
int print_c(va_list p);
int print_s(va_list p);
int print_pers(va_list p);
int print_i(va_list p);
int print_d(va_list p);

#endif
