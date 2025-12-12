#include "main.h"


/**
 * strcmp_recursion - function to compare the equality of two strings by the difference value
 * of their ascii
 * @s1: first string
 * @second strjng
 *
 * Return: 0 if equal, less than so if s1 < s2, greatwr tjan 0 if s2 > s1
 */

int strcmp_recursion(const char *s1, const char *s2)
{
	if (!*s1 || !*s2)
		return (*s1 - *s2);

	if (*s1 != *s2)
		return (*s1 - *s2);

	return (strcmp_recursion(s1 + 1, s2 + 1));
}
