#include "main.h"
/**
 * _printf - same as printf
 * @format: const char *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i;
	va_list p;

	if (format != NULL)
	{
		va_start(p, format);
		while (i < strlen(format))
		{
			if (format[i] != 37)
				_putchar(format[i]);
			else
			{
				_get_function(format[i + 1])(p);
				i++;
			}
			i++;
		}
		_putchar("\n");
	}
}
