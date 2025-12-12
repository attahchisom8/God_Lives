#include "main.h"


/**
 * _strsep - breaks a string into tokens
 * @stringp: a pointer to the address of a string
 * @delim: string providing characters to break our string
 *
 * Return: a pointer to the token
 */

char *_strsep(char **stringp, const char *delim)
{
	char *token = *stringp;

	if (!(*stringp))
		return (NULL);

	while (**stringp && _strchr(delim, **stringp))
	{
		token = "";
		(*stringp)++;
		return (token);
	}

	if (**stringp == '\0')
	{
		*stringp = NULL;
		return (token);
	}

	token = *stringp;
	while (**stringp && !_strchr(delim, **stringp))
		(*stringp)++;

	if (**stringp)
	{
		**stringp = '\0';
		(*stringp)++;
	}

	return (token);
}
