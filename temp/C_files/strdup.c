#include "main.h"


/**
 * _strdup - this function duplicates a string by copying it into a new memory
 * location
 * @str: string to duplicate
 *
 * Return: pointer to the duplicater string
 */

char *_strdup(const char *str)
{
	char *space, *new_str;
	size_t len = _strlen(str);

	space = malloc(len + 1);
	if (!space)
		return (NULL);
	new_str = _strcpy(space, str);

	return (new_str);
}
