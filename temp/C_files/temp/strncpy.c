#include "main.h"


/**
 * _strncpy - copy at most dsize of bytes from src to dest
 * @src: string to copy from
 * @dest: destination buffer to copy to
 *
 * Return: pointer to the destination buffer
 */

char *_strncpy(char *dest, const char *src, size_t dsize)
{
	int k = 0;
	size_t diff = 0, size_dest = sizeof(dest);
	char *temp;

	if (size_dest > dsize)
		diff = size_dest - dsize;

	temp = dest;
	while (k < dsize)
	{
		if (*src)
		{
			*temp = *src;
			temp++;
			src++;
		}
		else
		{
			*temp = '\0';
			temp++;
		}
		k++;
	}

	if (diff)
	{
		for (k = 0; k < diff; k++)
		{
			*(temp + dsize) = '\0';
			temp++;
		}
	}

	return (dest);
}
