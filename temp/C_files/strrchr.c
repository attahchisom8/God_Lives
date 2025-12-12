#include "main.h"


/**
 * _strrchr - function to loxate a byte within a string
 * @s: pointwr to the given string
 * @c: the byte we seek in the string
 *
 * Return: last occurence of the byte character in the string (including null terminator)
 */

char *_strrchr(const char *s, int c)
{
	int len = _strlen(s);
	char *end_ptr, *start_ptr = (char *)s;

	end_ptr = (char *)s + len;
	while (true)
	{
		if (*end_ptr == (char)c)
			return (end_ptr);

		if (end_ptr == start_ptr)
			break;
		end_ptr--;
	}

	return (NULL);
}
