#include "main.h"


/**
 * _strncmp - compares the first n bytes of two strings s1 and s2 for equality
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 = s2, negative if s1 < s2, positive if s1 > s2
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	int k = 0;

	while (k < n)
	{
		if ((*s1 != '\0' && *s1 == *s2))
		{
			s1++;
			s2++;
		}
		k++;
	}

	return (*s1 - *s2);
}

