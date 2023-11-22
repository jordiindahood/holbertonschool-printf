#ifndef PRINTF
#define PRINTF

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
	int (*f)(char *);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*_get_function(char s))(va_list);
int print_c(va_list);
int print_s(va_list);
int print_pers(va_list);

#endif
