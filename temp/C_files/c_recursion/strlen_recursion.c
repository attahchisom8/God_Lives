#include "main.h"


/**
 * strlen_recursion - gets the length of a string using recursion
 * @s: string whose length we seek
 *
 * Return: number of bytes in the string except the null byte
 */

size_t strlen_recursion(const char *s)
{
	size_t len = 0;

	if (*s == '\0')
		return (len);
	len = 1 + strlen_recursion(s + 1);

	return (len);
}
