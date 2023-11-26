#include "main.h"
/**
 * _printf - same as printf
 * @format: const char *
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list p;
	int x = 0;

	if (format == NULL)
		format = "\0";


	va_start(p, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			x += _putchar(format[i]);
		else
		{
			if (_get_function(format[i++]) != NULL)
				x += (*_get_function(format[i]))(p);
			else
				x += nothing(format[i]);
		}
		i++;
	}
	va_end(p);
	return (x);
}
