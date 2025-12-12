#include "main.h"


/**
 * strchr_helper - help anchor a pointer at the end of a string and run backwards
 * @start: start of the string
 */


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
	/*const char *end = s + strlen_recursion(s) - 1;
	printf("end: %s\n", end);

	if (*s == (char)c)
		return ((char *)end);

	if (end == s)
		return (NULL);

	return (strrchr_recursion(end - 1, c));*/

	size_t len = strlen_recursion(s), k = 0;
	char arr[len + 1], *ptr = arr;

	while (1)
	{
		arr[k] = *(s + len - 1);

		if (len == 1)
			break;
		k++;
		len--;
	}
	printf(

	return (strchr_recursion(ptr, c));
}
