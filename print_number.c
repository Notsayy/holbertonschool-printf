#include "main.h"
/**
 * print_number - Recursively prints an integer
 * @value: The integer to print
 *
 * Return: The total number of digits printed.
 */
int print_number(unsigned int value)
{
	int count = 0;

	if (value / 10)
		count += print_number(value / 10);

	_putchar((value % 10) + '0');
	return (count + 1);
}
