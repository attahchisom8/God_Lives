#include "main.h"


/**
 * _strnlen - caculates the number of bytes in a string at most maxlen bytes
 * @s: The given string
 * @maxlen: maximum number of bytes we expect to be returned
 *
 * Return: number of bytes in s, less than or equal to maxlen
 */

size_t _strnlen(const char *s, size_t maxlen)
{
	int k = 0;
	size_t n_len_bytes = 0;

	while (k < maxlen)
	{
		if (*s)
		{
			n_len_bytes++;
			s++;
		}
		k++;
	}

	return (n_len_bytes);
}
