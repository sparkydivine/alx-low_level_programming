#include "main.h"

/**
 * print_alphabet - lower case format function
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
		_putchar(k);
	_putchar('\n');
}
