#include "main.h"


/**
 * check_substr - check if a sunstring is in a main string
 * @str: given string
 * @substr: given subdtr
 *
 * Return: 1 if the substring is found else 0
 */

int check_substr(const char *str, const char *substr)
{
	if (!*substr)
		return (1);

	if (!*str || *str != *substr)
		return (0);

	return (check_substr(str + 1, substr + 1));
}


/**
 * strstr_recursion - recursively check if a string contains a substring
 * @heystack: the given string to check for  substring
 * @meedle: substring we wish to find
 *
 * Return: pointer to the first occurrence of the subdtring
 */

char *strstr_recursion(const char *heystack, const char *needle)
{
	if (!needle || !*needle)
		return ((char *)heystack);

	if (!*heystack)
		return (NULL);

	if (check_substr(heystack, needle))
		return ((char *)heystack);

	return (strstr_recursion(heystack + 1, needle));
}
