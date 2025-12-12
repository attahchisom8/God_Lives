#include "main.h"


/**
 * _strcspn - function the length im bytes of the initial segment of a given string
 * consisting entirely of string not found in anothwr string
 * @s: main string
 * @reject: string providing matching byte
 *
 * Return: numbwr of bytes in the initial segment of string s consisting entirely
 * of bytes not foubd in string s
 */

size_t _strcspn(const char *s, const char *reject)
{
	size_t len_bytes = 0;

	if (!reject)
		return (0);

	while (*s != '\0')
	{
		if (!_strchr(reject, *s))
			len_bytes += 1;
		else
			break;
		s++;
	}

	return (len_bytes);
}
