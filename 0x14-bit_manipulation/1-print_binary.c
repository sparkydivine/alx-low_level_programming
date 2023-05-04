#include "main.h"
/**
 * print_binary - it prints the binary that represents a number.
 * @n: to print number in binary
 * Return: return void success
*/
void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
