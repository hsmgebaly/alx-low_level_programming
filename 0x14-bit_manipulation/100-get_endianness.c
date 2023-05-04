#include "main.h"
/**
 * get_endianness - Check if THE Machine is little or Big endian
 * Return: For big = 0, For little = 1
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *) &h;

	return (*c);
}

