#include "main.h"
#include <stdio.h>

/**
 * print_string - Prints a string.
 * @args: A list of arguments containing the string to print.
 *
 * Return: Nothing
 */

void print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(nil)";

	while (*string)
	{
		_putchar(*string++);
	}
}
