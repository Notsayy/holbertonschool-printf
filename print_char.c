#include "main.h"

/**
 * print_char - Prints a character.
 * @args: A list of arguments containing the character to print.
 *
 * Return: Nothing
 */

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}
