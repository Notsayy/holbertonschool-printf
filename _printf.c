#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Prints anything based on the format provided.
 * @format: A list of arguments passed to the function.
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int format_count = 0, length = 0, specifier_count;
	int (*print_funcs[])(va_list) = {
		print_char, print_string, print_decimal, print_integer, print_percent};
	char format_specifiers[] = {'c', 's', 'd', 'i', '%'};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[format_count])
	{
		if (format[format_count] == '%')
		{
			format_count++;
			if (format[format_count] == '\0')
			{
				_putchar('%');
				length++;
				break; }
			for (specifier_count = 0; specifier_count < 5; specifier_count++)
			{
				if (format[format_count] == format_specifiers[specifier_count])
				{
					length += print_funcs[specifier_count](args);
					break; }
			}
			if (specifier_count == 5)
			{
				_putchar('%');
				_putchar(format[format_count]);
				length += 2; }
		}
		else
		{
			_putchar(format[format_count]);
			length++; }
		format_count++;
	}
	va_end(args);
	return (length);
}
