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
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_i},
		{'%', print_pers},
		{'\0', NULL}};
	i = 0;
	while (s)
	{
		if (s == T[i].op)
			break;
		i++;
	}
	return (T[i].f);
}
