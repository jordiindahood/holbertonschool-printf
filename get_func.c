#include "main.h"
/**
 * _get_function - selecting a specific function and return it
 * depending on the option
 * @s: char
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
		{"u", print_unsigned},
		{"o", print_oct},
		{"%", print_pers},
		{"r",print_r}};

	for (i = 0; i < 8; i++)
		if (s == *(T[i].op))
			return (T[i].f);

	return (NULL);
}
