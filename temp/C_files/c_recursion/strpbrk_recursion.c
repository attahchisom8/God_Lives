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

char *strpbrk_recursion(const char *s, const char *accept)
{
	if (!accept)
		return (NULL);

	if (!*s)
		return (NULL);

	if (strchr_recursion(accept, *s))
		return ((char *)s);

	return (strpbrk_recursion(s + 1, accept));
}
