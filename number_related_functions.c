#include "main.h"
#include <math.h>
/*file specified for function related to printing*/
/**
 * print_oct - print an octal number
 * @p: va_list
 * Return: int
 */
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
 * print_i - print numbers
 * @p: va_list
 * Return: int
 */
int print_i(va_list p)
{
	int i, size;
	long n;
	int *q;
	int sign = 0;

	n = va_arg(p, int);

	if (n == INT_MIN)
	{
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
	do {
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
/**
 * print_d - decimal number
 * @p: va_list
 * Return: int
 */
int print_d(va_list p)
{
	int i, size;
	long n;
	int *q;
	int sign = 0;

	n = va_arg(p, int);

	if (n == INT_MIN)
	{
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
	do {
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
/**
 * print_unsigned - print an unsigne character
 * @p: va_list
 * Return: int
 */
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
	do {
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
