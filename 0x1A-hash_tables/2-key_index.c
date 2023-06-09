#include "hash_tables.h"
/**
 * key_index - gives key index
 * @key: table key
 * @size: table array size
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
