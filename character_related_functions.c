#include "main.h"
/*THIS FILE CONTAINS FUNCTIONS CALLED BY THE OPTION AFTER "%"*/
/**
 * print_pers - literally print a percent"%"
 * @p: va_list (unused)
 * Return: int
 */
int print_pers(va_list p)
{
	UNUSED(p);
	_putchar('%');
	return (1);
}
/**
 * print_c - print character
 * @p: va_list
 * Return: int
 */
int print_c(va_list p)
{
	_putchar(va_arg(p, int));
	return (1);
}
/**
 * print_s - print a string
 * @p: va_list
 * Return: int
 */
int print_s(va_list p)
{
	char *str;
	int i, n = 0;

	str = va_arg(p, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		n += _putchar(str[i]);

	return (n);
}
/**
 * print_r - print iin reverse
 * @p: va_list
 * Return: int
*/
int print_r(va_list p){
	return(print_rev(va_arg(p,char*)));
}
/**
 * print_rev - check the code
 * Description: print a string in reverse
 * @s: pointer to the string to be executed
 * Return: void
 */
int print_rev(char *s)
{
	int i, n, x =0;

	if (s == NULL)
		return(0);
	n = strlen(s);
	if (*s == '\0')
		x = _putchar('\n');
	else
	{
		i = 0;
		do {
			x += _putchar(*(s + n - i - 1));
			i++;
		} while (*(s + i) != '\0');
	}
	return(x);
}