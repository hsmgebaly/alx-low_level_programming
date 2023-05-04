#include "main.h"
/**
 * clear_bit - set THE value of a given Bit to be 0
 * @h: pointer to the NUM to be Changed
 * @index: Index of the Bit to be cleared
 *
 * Return: 1 is success , -1 if failed
 */
int clear_bit(unsigned long int *h, unsigned int index)
{
	if (index > 63)
		return (-1);

	*h = (~(1UL << index) & *h);
	return (1);
}

