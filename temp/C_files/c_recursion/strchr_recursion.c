#include "main.h"


/**
 * strchr_recursion - find if q given byte is in a given string
 * @str: main string
 * @c: byte we seek in  s
 *
 * Return: pointer to the first occurrence of the byte
 */

char *strchr_recursion(const char *s, int c)
{
	if (!*s)
		return (NULL);

	if (*s == (char)c)
		return ((char *)s);

	return (strchr_recursion(s + 1, c));
}
