#include "main.h"

/**
 * binary_to_uint - A finction that works on converting binary number
 * to an unsigned integer
 * @b:  pointer to the binary string
 * Return: unsigned integer converts to  number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += base;
		base *= 2;
		len--;
	}
	return (result);
}
