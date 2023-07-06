#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct hash_node_s - A hash table’s node
 * @key: The string and key
 * In the HashTable, the key is distinct.
 * @value: The value associated with a key
 * @next: an indicator of the List's subsequent node
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Data structure of a hash table
 * @size: The array’ size.
 * @array: a size @size array
 * Each cell in this array points to the first node of a linked list,
 * because we want to use a Chaining collision handling in our hash table.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
char *hash_table_get(const hash_table_t *ht, const char *key);
hash_table_t *hash_table_create(unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_delete(hash_table_t *ht);
void hash_table_print(const hash_table_t *ht);

/**
 * struct shash_node_s - A sortable hash table's node
 * @key: The string and key
 * In the HashTable, the key is distinct.
 * @value: The value associated with a key
 * @next: an indicator of the List's subsequent node
 * @sprev: an indication of the sorted linked list's preceding element
 * @snext: an indication of the sorted linked list's subsequent member.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Hash table data structure for sorting
 * @size: The array’s size
 * @array: The array of size @size
 * Each cell in this array points to the first node of a linked list,
 * because we want to use a Chaining collision handling in our hash table.
 * @shead: A pointer of the sorted linked list's first element
 * @stail: A pointer of the sorted linked list's last element
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

char *shash_table_get(const shash_table_t *ht, const char *key);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
shash_table_t *shash_table_create(unsigned long int size);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void shash_table_print(const shash_table_t *ht);

#endif /* HASH_TABLES_H */
