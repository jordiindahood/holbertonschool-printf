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

	if (format == NULL) /*ERROR: if (format) is NULL*/
		return (-1);

	va_start(p, format);
	while (format[i] != '\0') /*iterating through the string (format)*/
	{
		if (format[i] == '%' && format[i + 1] == '\0') /*ERROR: if there is % without option*/
			return (-1);

		if (format[i] != '%')
			x += _putchar(format[i]);
		else
		{
			if (format[i++] == '\0')
				return (-1);
			else
			{
				if (_get_function(format[i]) != NULL)
					x += (*_get_function(format[i]))(p);
				else
					x+= nothing(format[i]);
			}
		}
		i++;
	}
	va_end(p);
	return (x);
}
