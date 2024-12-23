# Holberton Printf

This project is meant to create a custom "printf" which is
a command that dislay a string.

## Requirements

### Compilation
The compilation command used is:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
which means that this project will include only .c files.

### To Know
- the version of Ubuntu will be Ubuntu 20.04 LTS
- the code have to respect Betty style
- forbid to use mor than 5 functions per file
- all files will have ["main.h"](./main.h) as the header file ("#include main.h")
- global variables are forbidden

### Authorized functions
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Project structure
- [main.h](./main.h) : Header file.
- [_putchar.c](./_putchar.c): contain the function "_putchar".
- [print_number.c](./print_number.c): contain the function "print number".
- [print_char.c](./print_char.c): contain the function "print char".
- [print_integer.c](./print_integer.c): contain the function "print integer".
- [print_decimal.c](./print_decimal.c): contain the function "print decimal".
- [print_string.c](./print_string.c): contain the function "print string".
- [print_percent.c](./print_percent.c): contain the function "print percent".
- [_printf.c](./_printf.c): contain the main implementation of the custom function "printf".


## Specifiers
_printf works with these specifiers:

+ `%s`: Prints a string of characters.
+ `%c`: Prints a character.
+ `%d`: Prints integers (only matches with decimals).
+ `%i`: Prints integers (matches with decimals, octal & hexadecimals).
+ `%%`: Prints a percentage

## Examples
Here are a few examples of how to use _printf:

```
#include "main.h"

int main(void)
{
    _printf("Holberton Dijon!\n");
    _printf("The first 5 pair numbers are: %d, %d, %d, %d, %d\n", 2, 4, 6, 8, 10);
    _printf("Printing a string: %s\n", "Do you know how to code?");
    _printf("Printing a percentage: %%\n");
    return (0);
}
```
## Flowchart
![Flowchart](image/flowchart.png)

## Bugs
Don't hesitate to let us know if you see any bug regarding the code.

## Credits
This project is presented by:
- [Jules Tertre](https://github.com/notsayy)
- [Ephely Koke](https://github.com/ephely)