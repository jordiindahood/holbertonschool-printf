#include "main.h"
/**
 * _printf - same as printf
 * @format: const char *
 * Return: int
 */
int (*_get_function(char s))(va_list)
{
    op_t T[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_pers},
		{'d', op_string},
		{'i', print_pers},
		{'\0', NULL},
	};}