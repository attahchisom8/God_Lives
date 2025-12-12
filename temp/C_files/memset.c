#include "main.h"


/**
 * _memset - function to set a memory location with the value of a byte a
 * particualar number of times
 * @ptr: pointer to a memory locatoon
 * @c: value of byte to set in ptr
 * @n: number of times to set c in ptr
 *
 * Return: pointer to ptr
 */

void *_memset(void *ptr, int c, size_t n)
{
	size_t k = 0;
	char *temp = ptr;

	while (k < n)
	{
		*temp = c;

		temp++;
		k++;
	}

	return (ptr);
}
