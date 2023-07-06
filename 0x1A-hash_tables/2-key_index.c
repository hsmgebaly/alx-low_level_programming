#include "hash_tables.h"

/**
 * key_index - Find the index in an array of a hash table at
 *      which a key/value pair should be stored.
 * @key: The index key is what needed.
 * @size: the size of the hash table's array.
 *
 * Return: The key’s index.
 * Description: include the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
