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

	/*ERROR: if (format) is NULL*/
	if (format == NULL)
		return (-1);

	va_start(p, format);

	/*iterating through the string (format)*/
	while (format[i] != '\0')
	{
		/*ERROR: if there is % without option*/
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		if (format[i] != '%')
			x += _putchar(format[i]);
		else
		{
			/*ERROR: */
			if (format[i++] == '\0')
				return (-1);
			/*SUCCESS: if there is a non null character after %*/
			else
			{
				if (_get_function(format[i]) != NULL)
					x += (*_get_function(format[i]))(p);
				else
					x += nothing(format[i]);
			}
		}
		i++;
	}
	va_end(p);
	return (x);
}
