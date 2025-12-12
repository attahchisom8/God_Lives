#include "main.h"


/**
 * _strstr - function to locate the first occurrence of a substring in a given string
 * @heystack: The main string
 * @neeedle: the substring
 *
 * Reeturn: pointer to the first occurrence of the substring else NULL
 */

char *_strstr1(const char *heystack, const char *needle)
{
	char *first, *temp, *reset = (char *)needle;
	char *next_chars;
	bool flag = false;

	if (!needle || *needle == '\0')
		return ((char *)heystack);

	temp = (char *)needle;
	while (*heystack != '\0')
	{
		if (*heystack == *temp)
		{
			first = (char *)heystack;
			next_chars = first;
			for (; *temp != '\0'; temp++)
			{
				if (*temp ==*next_chars)
				{
					flag = true;
					next_chars++;
				}
				else
				{
					first = NULL;
					flag = false;
					break;
				}
			}
			temp = reset;
		}

		if (flag)
			break;
		heystack++;
	}
	if (flag)
		return (first);

	return (NULL);
}


/**
 * _strstr2 - A second strstr with better run time
 * @heystack: main string
 * @needle: substring we seek in heystack
 *
 * Return: pointer to the first occurrence of the substring else NULL
 */

char *_strstr2(const char *heystack, const char *needle)
{
	const char *temp1, *temp2;

	if (!needle || *needle == '\0')
		return ((char *)heystack);

	while (*heystack!= '\0')
	{
		temp1 = heystack, temp2 = needle;
		while (*temp2 != '\0' && *temp2 == *temp1)
		{
			temp1++;
			temp2++;
		}

		if (*temp2 == '\0')
			return ((char *)heystack);
		heystack++;
	}
	return (NULL);
}

