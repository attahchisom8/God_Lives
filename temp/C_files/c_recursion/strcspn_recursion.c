#include "main.h"


/**
 * _strcspn - function that returns the length im bytes of the initial segment of a 
 * given string consisting entirely of bytes not found in anothwr string
 * @s: main string                           * @reject: string providing matching byte
 *                                           * Return: numbwr of bytes in the initial segment of string s consisting entirely
 * of bytes not foubd in string s
 */

size_t strcspn_recursion(const char *s, const char *reject)
{
	if (!reject)
		return (0);

	if (!*s)
		return (0);

	if (!strchr_recursion(reject, *s))
		return (1 + strcspn_recursion(s + 1, reject));

	return (0);
}
