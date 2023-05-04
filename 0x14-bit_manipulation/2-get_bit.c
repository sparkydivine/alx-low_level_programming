#include "main.h"
/**
 * get_bit - to get the value of a given in an index.
 * @n: Number to search in
 * @index: bit position
 * Return: Value of bit @index in @n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	if ((n >> index) & 1lu)
		return (1);
	else
		return (0);
}
