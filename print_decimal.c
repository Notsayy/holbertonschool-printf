#include "main.h"

/**
 * print_decimal - Prints an integer.
 * @args: A list of arguments containing the integer to print.
 *
 * Return: The total number of digits printed.
 */

int print_decimal(va_list args)
{
	int value = va_arg(args, int);
	int count = 0;

	if (value < 0)
	{
		_putchar('-');
		value = -value;
		count++;
	}

	if (value == 0)
	{
		_putchar('0');
		return (1);
	}

	return (count + print_number(value));
}
