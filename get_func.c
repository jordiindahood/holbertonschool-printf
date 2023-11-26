#include "main.h"
/**
 * _printf - same as printf
 * @format: const char *
 * Return: int
 */
int (*_get_function(char s))(va_list)
{
	int i;
	op_t T[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"u",print_unsigned},
		{"%", print_pers},
		{"o",print_oct}};

	for (i=0;i < 7;i++)
		if (s == *(T[i].op))
			return (T[i].f);
	return(NULL);
}
