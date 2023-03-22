#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - Print a name from a function pointer
 * @name: char string
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
