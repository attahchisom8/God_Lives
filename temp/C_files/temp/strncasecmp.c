#include "main.h"


/**
 * _strncasecmp - compare for equality in the first n bytes of two strings based
 * on their byte case insensitely
 * @s1: first atring
 * @s2: secoond string
 *
 * interger value; negative - s2 > s1, Equality -:s1 == s2, positive s1 > s2
 */

int _strncasecmp(const char *s1, const char *s2, size_t n)
{
	int k = 0;

	while (k < n)
	{
		if (*s1 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		k++;
	}

	return (to_lower(*s1) - to_lower(*s2));
}
