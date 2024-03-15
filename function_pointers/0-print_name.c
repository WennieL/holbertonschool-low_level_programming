#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function pointer.
 * @name: The name to be printed.
 * @f: A function pointer to a function that take
 * a char* argument and returns void.
 *
 * Description: This function prints the provided name using
 *              the provided function pointer.
 *              The function pointer should point to a function
 *              that takes a char* argument
 *              representing the name to be printed and returns void.
 * Return: None.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
