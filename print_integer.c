#include "main.h"

/**
 * print_integer - Prints an integer.
 * @args: A list of arguments containing the integer to print.
 *
 * Return: Nothing
 */

void print_integer(va_list args)
{
	int value = va_arg(args, int);

	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}

	if (value == 0)
	{
		_putchar('0');
		return;
	}

	print_number(value);
}
