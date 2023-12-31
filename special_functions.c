#include "main.h"
#include <unistd.h>
/*THIS FILE CONTAIN FUNCTIONS THAT COPNTRIBUTED IN PRINTING*/
/**
 * digits - count how many digits a number have
 * @n: long
 * Return: int
 */
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
/**
 * nothing - print a percent"%", followed by a given character
 * @s: char
 * Return: int
 */
int nothing(char s)
{
	_putchar('%');
	_putchar(s);
	return (2);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_rev - check the code
 * Description: print a string in reverse
 * @s: pointer to the string to be executed
 * Return: void
 */
int print_rev(char *s)
{
	int i, n, x = 0;

	n = strlen(s);
	if (*s != '\0')
	{
		i = 0;
		do
		{
			x += _putchar(*(s + n - i - 1));
			i++;
		} while (*(s + i) != '\0');
	}
	return (x);
}
