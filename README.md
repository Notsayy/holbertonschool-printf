# Holberton Printf

This project is meant to create a custom "printf" which is
a command that dislay a string. 
The compilation command used is: 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
which means that this project will include only .c files.

## Requirements
- the version of Ubuntu will be Ubuntu 20.04 LTS 
- the code have to respect Betty style 
- forbid to use mor than 5 functions per file 
- all files will have "main.h" as the header file ("#include main.h") 
- global variables are forbidden

## Specifiers
_printf works with these specifiers:

+ `%s`: Prints a string of characters. 
+ `%c`: Prints a character.
+ `%d`: Prints integers (only matches with decimals). 
+ `%i`: Prints integers (matches with decimals, octal & hexadecimals).    
+ `%%`: Prints a percentage
