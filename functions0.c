#include "main.h"

void number(long n);
/**
 * print_c - print character
 * @p: va_list
 */
int print_c(va_list p)
{
	_putchar(va_arg(p, int));
	return (1);
}
/**
 * print_c - print character
 * @p: va_list
 */
int print_s(va_list p)
{
	char *str;
	int i = 0;

	str = va_arg(p, char *);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (1);
}
/**
 * print_c - print character
 * @p: va_list
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
 */
int print_i(va_list p)
{
	
	long n = va_arg(p, int);
	number(n);
	return (1);
}
/**
 * print_c - print character
 * @p: va_list
 */
int print_d(va_list p)
{
	long n = va_arg(p, int);
	number(n);
	return (1);
}
void number(long n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		number(n / 10);
	putchar(n % 10 + '0');
}
