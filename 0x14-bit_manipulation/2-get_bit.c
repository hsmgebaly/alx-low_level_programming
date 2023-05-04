#include "main.h"
/**
 * get_bit - Return THE Value OF a bit AT an index IN a decimal NUM
 * @h: NUM TO search for
 * @index: Index of THE Bit
 *
 * Return: Value of THE Bit
 */
int get_bit(unsigned long int h, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (h >> index) & 1;

	return (bit_val);
}

