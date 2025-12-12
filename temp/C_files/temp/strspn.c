#include "main.h"


/**
 * _strspn - function to return the length in bytes in the initail segment of a strng
 * consisting only of bytes from another string
 * @s: main string
 * @accept: string whose characters we need to check in the initial sement of main string
 *
 * Return: number of bytes in main string consisting only of characters in accept
 */

size_t _strspn(const char *s, const char *accept)
{
	size_t len_bytes = 0;
	bool flag = false;
	const char *reset = accept;

	if (!accept)
		return(0);

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				flag = true;
				len_bytes++;
				break;
			}
			else
				flag = false;
			accept++;
		}
		accept = reset;

		if (!flag)
			break;
		s++;
	}

	return (len_bytes);
}
