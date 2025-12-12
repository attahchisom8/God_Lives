#include "main.h"


/**
 * _memchr - funcrion that scans a memory area for a given byte
 * @s: pointer to the memory area we wish to scan
 * @c: The byte we are looking for in the memory area
 * @n: the first n bytes of the memory area
 */

void *_memchr(const void *s, int c, size_t n)
{
	size_t k;
	unsigned char *str = (unsigned char *)s;

	for (k = 0; k < n; k++)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}

	return (NULL);
}
