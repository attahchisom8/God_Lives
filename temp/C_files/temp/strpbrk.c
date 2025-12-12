#include "main.h"


/**
 * _strpbrk - locates the first occurrence of a byte in a string of any one of the
 * byte in abmnother string
 * @str: string to locate a byte jn
 *
 * @accept: string containing bytes we want ro find in str
 *
 * Return: pointer ro the first occurrence of the byte we seek (including null byte)
 */

char *_strpbrk(const char *s, const char *accept)
{
	char *reset = (char *)accept;

	while (1)
	{
		while (1)
		{
			if (*accept == *s)
				return ((char *)s);
			if (*accept == '\0')
				break;
			accept++;
		}
		accept = reset;

		if (*s == '\0')
			break;
		s++;
	}
	return (NULL);
}
