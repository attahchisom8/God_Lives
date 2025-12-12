#include "main.h"


/**
 * _strchr - locates first occurance of a given byte in a string including the null
 * byte (null terminator)
 * @s: pointer fo the given string
 * @c: byte we wish to find in the string
 *
 * Return: pointer to the first occurrence of the byte
 */

char *_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);

	return (NULL);
}
