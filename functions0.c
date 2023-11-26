#include "main.h"
int number(long n);
int print_oct(va_list p)
{
	int n = va_arg(p, double);
	int octalNum[10000];
	int i, j = 0;
	int x = 0;

	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		x += _putchar('0' + octalNum[j]);
	return (x);
}
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
	int i, n = 0;

	str = va_arg(p, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		n += _putchar(str[i]);

	return (n);
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
	int i, n, size;
	int *q;
	int sign = 0;

	n = va_arg(p, int);
	if (n == 0)
		return (_putchar(n + '0'));
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		sign++;
	}
	size = digits(n);
	do
	{
		q = malloc(sizeof(int) * size);
	} while (q == NULL);
	for (i = 0; i < size; i++)
	{
		q[size - 1 - i] = n % 10;
		n = n / 10;
	}
	for (i = 0; i < size; i++)
		_putchar('0' + q[i]);
	free(q);
	return (sign + size);
}
/**
 * print_c - print character
 * @p: va_list
 */
int print_d(va_list p)
{
	int i, size;
	long n;
	int *q;
	int sign = 0;

	n = va_arg(p,int );

	if (n== INT_MIN){
		_putchar('-');
		n = INT_MAX;
		sign++;
		n++;
	}

	if (n == 0)
		return (_putchar('0'));

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		sign++;
	}

	size = digits(n);
	do
	{
		q = malloc(sizeof(n) * size);
	} while (q == NULL);
	for (i = 0; i < size; i++)
	{
		q[size - 1 - i] = n % 10;
		n = n / 10;
	}
	if (size == 1){
		_putchar('0');
		_putchar(q[0]);
	}
	for (i = 0; i < size; i++)
		_putchar('0' + q[i]);
	free(q);
	return (sign + size);
}
int digits(long n)
{
	int i = n;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
int nothing(char s)
{
	_putchar('%');
	_putchar(s);
	return (2);
}
int print_unsigned(va_list p)
{

	int i, n, size;
	int *q;
	int sign = 0;

	n = va_arg(p, unsigned);
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		sign++;
	}
	size = digits(n);
	do
	{
		q = malloc(sizeof(n) * size);
	} while (q == NULL);
	for (i = 0; i < size; i++)
	{
		q[size - 1 - i] = n % 10;
		n = n / 10;
	}
	for (i = 0; i < size; i++)
		_putchar('0' + q[i]);
	free(q);
	return (sign + size);
}
