#include "main.h"

/**
 * _strcpy - function to copy a string to q new memory location
 * @src: source string to copy
 * @dest: pounter to buffer that holds thr copied string
 *
 * Return: return a pointer to the copied sting
 */

char *_strcpy(char *dest, const char *src)
{
	/* store the initial pointer to the buffer to a temp variable */
	/*so as to  prevent returning a pointer to the buffer that points to the */
	/* last character which is the null terminator */

	char *temp = dest;

	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';

	return (dest);
}
