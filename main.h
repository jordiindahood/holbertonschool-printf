#ifndef PRINTF
#define PRINTF

#define UNUSED(x) (void)(x) /*macro function similar to unused attribute*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>
#include <limits.h>

/**
 * struct op - Struct op
 *
 * @op: The option char*
 * @f: The function associated int (*)
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

int digits(long n);
int _abs(int n);
int nothing(char s);
int _putchar(char c);
int _printf(const char *format, ...);
int _pow_recursion(int x, int y);
int print_rev(char* s);

int (*_get_function(char s))(va_list);
int print_c(va_list p);
int print_s(va_list p);
int print_pers(va_list p);
int print_i(va_list p);
int print_d(va_list p);
int print_unsigned(va_list p);
int print_oct(va_list p);
int print_r(va_list p);

#endif
