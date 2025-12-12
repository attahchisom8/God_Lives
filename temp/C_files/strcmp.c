#include "main.h"


/**
 * _strcmp - function to compare the equality of two strings by the difference value
 * of their ascii
 * @s1: first string
 * @second strjng
 *
 * Return: 0 if equal, less than so if s1 < s2, greatwr tjan 0 if s2 > s1
 */

int _strcmp(const char *s1, const char *s2)
{
	if (!s1)
		return (-1);
	if (!s2)
		return (-1);

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
