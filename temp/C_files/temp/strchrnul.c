#include "main.h"


/**
 * _strchrnul - search a given string for a particular byte
 * @s: string to be searched
 * @c: character byte we seek in the string
 *
 * Return: pointer to the first occurrence of the byte if found else a nill terminator
 */

char *_strchrnul(const char *s, int c)
{
	while (1)
	{
		if (*s == (char)c)
			return ((char *)s);

		if (*s == '\0')
			break;
		s++;
	}

	return ("\0");
}
