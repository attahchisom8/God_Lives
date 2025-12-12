#include "main.h"


/*
 * _strcat - function to concatenate two string
 * @src: string to attach after dest string
 * @dest: destination string to recieve the source string
 *
 * Return: pointer to the concertenated string
 */

char *_strcat(char *dest, const char *src)
{
	char *space = malloc(_strlen(dest) + _strlen(src) + 1);
	char *dest_end = dest;

	if (!space)
		return (NULL);
	dest = space;
	while (*dest_end != '\0')
	{
		*space = *dest_end;
		dest_end++;
		space++;
	}

	do {
		*space = *src;
		src++;
		space++;
	} while (*src != '\0');
	*space = '\0';

	return (dest);
}
