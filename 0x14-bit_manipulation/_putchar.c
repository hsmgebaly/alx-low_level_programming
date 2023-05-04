#include "main.h"
#include <unistd.h>

/**
 * _putchar write Character c TO stdout
 * @c: Character TO be printed
 *
 * Return: On success return 1.
 * On error,  retur -1 , and err is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
