#include "main.h"

/**
 * _strlen - calculates the length of a string excluding the null bite
 * @s: string whose length we seek
 *
 * Rwturn: length of the string
 */

size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
