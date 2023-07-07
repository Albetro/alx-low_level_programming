#include "hash_tables.h"

/**
 * key_index - Returns the index to place an item in the hash table.
 * @key: The key of the item.
 * @size: Size of the hash table array.
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
