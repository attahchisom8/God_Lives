#include "main.h"


/**
 * _strspn - function to return the length in bytes in the initail segment of a strng
 * consisting only of bytes from another string
 * @s: main string
 * @accept: string whose characters we need to check in the initial sement of main string
 *
 * Return: number of bytes in main string consisting only of characters in accept
 */

size_t strspn_recursion(const char *s, const char *accept)
{
	if (!accept || !*accept)
		return (0);

	if (!*s)
		return (0);

	if (!strchr_recursion(accept, *s))
		return (0);

	return (1 + strspn_recursion(s + 1, accept));
}
