#include "main.h"
/**
 * set_bit - Set a Bit AT a given index TO 1
 * @h: pointer TO the NUM to be changed
 * @index: Index of the Bit to be = 1
 *
 * Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *h, unsigned int index)
{
	if (index > 63)
		return (-1);

	*h = ((1UL << index) | *h);
	return (1);
}

