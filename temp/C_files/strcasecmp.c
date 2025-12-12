#include "main.h"


/**
 * _strcasecmp - compare the equality of two strings based on their byte cass
 * insensitely
 * @s1: first atring
 * @s2: secoond string
 *
 * interger value; negative - s2 > s1, Equality -:s1 == s2, positive s1 > s2
 */

int _strcasecmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (to_lower(*s1) - to_lower(*s2));
}
