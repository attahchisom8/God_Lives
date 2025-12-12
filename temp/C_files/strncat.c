#include "main.h"


/**
 * _strncat - concertenates ssize byte from src to desf
 * @src: source string
 * @dest: destination string
 * ssize: number of bytes to adjoin from src to dest
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, const char *src, size_t ssize)
{
	size_t resize = _strnlen(src, ssize);
	size_t dest_len = _strlen(dest);
	char *space;

	space = malloc(dest_len + resize + 1);
	if (!space)
		return (NULL);

	_strcpy(space, dest);
	_strncpy(space + dest_len, src, resize);
	*(space + dest_len + resize) = '\0';

	return (space);
}
