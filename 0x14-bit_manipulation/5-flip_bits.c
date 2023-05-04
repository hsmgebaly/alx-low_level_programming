#include "main.h"
/**
 * flip_bits - Count the NUM of Bits to be changed
 * Get from the one NUM to the other NUM
 * @h: 1st number
 * @g: 2nd number
 *
 * Return: number of Bits that changed
 */
unsigned int flip_bits(unsigned long int h, unsigned long int g)
{
	int r, count = 0;
	unsigned long int current;
	unsigned long int exclusive = h ^ g;

	for (r = 63; r >= 0; r--)
	{
		current = exclusive >> r;
		if (current & 1)
			count++;
	}

	return (count);
}

