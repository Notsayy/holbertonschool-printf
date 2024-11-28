#include "main.h"
#include <stdio.h>
/**
 * print_string - Prints a string.
 * @args: A list of arguments containing the string to print.
 *
 * Return:The number of characters printed.
 */
int print_string(va_list args)
{
    char *string = va_arg(args, char *);
    int count = 0;
    if (string == NULL || *string == '\0')
        return (0);
    while (*string)
    {
        _putchar(*string++);
        count++;
    }
    return (count);
}