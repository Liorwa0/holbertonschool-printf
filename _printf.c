#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Format string containing format specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				return (-1);

			if (*format == 'c')
				count += print_char(va_arg(args, int));

			else if (*format == 's')
				count += print_string(va_arg(args, char *));

			else if (*format == '%')
				count += print_char('%');

			else if (*format == 'd' || *format == 'i')
				count += print_number(va_arg(args, int));

			else
			{
				count += print_char('%');
				count += print_char(*format);
			}
		}
		else
		{
			count += print_char(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}
