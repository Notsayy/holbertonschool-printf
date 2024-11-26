#include "main.h"
/**
 * print_number - Recursively prints an integer
 * @value: The integer to print
 *
 * Return: Nothing
 */
void print_number(int value)
{
	if (value / 10)
		print_number(value / 10);

	_putchar((value % 10) + '0');
}
