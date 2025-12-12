#include "main.h"


/**
 * strchr_helper - help anchor a pointer at the end of a string and run backwards
 * @start: start of the string
 * @end: end of the string
 *
 * Return: pointer to the end of the string
 */

char *strrchr_helper(const char *start, const char *end, int c)
{
	if (*end == (char)c)
		return ((char *)end);

	if (start == end)
		return (NULL);

	return (strrchr_helper(start, end - 1, c));
}


/**
 * strchr_recursion - find if q given byte is in a given string starting from the end
 * of the string
 * @str: main string
 * @c: byte we seek in  s
 *
 * Return: pointer to the last occurrence of the byte
 */

char *strrchr_recursion(const char *s, int c)
{
	const char *end = end = s + strlen_recursion(s) - 1;

	return (strrchr_helper(s, end, c));
}
