#include "main.h"


/**
 * check_token - check if the given string is tokenizable
 * @ptr: a pointer to the given pointer
 * @delim: delimiting string
 *
 * Return: 1 if token is found, 0 for all other cases
 */

int check_token(char **ptr, const char *delim)
{
	if (!**ptr)
		return (0);

	if (strchr_recursion(delim, **ptr))
	{
		**ptr = '\0';
		(*ptr)++;
		return (1);
	}
	(*ptr)++;

	return (check_token(ptr, delim));
}

/**
 * _strsep - breaks a string into tokens
 * @stringp: a pointer to the address of a string
 * @delim: string providing characters to break our string
 *
 * Return: a pointer to the token
 */

char *strsep_recursion(char **stringp, const char *delim)
{
	char *token;

	if (!*stringp)
		return (NULL);

	if (!**stringp)
	{
		token = *stringp;
		*stringp = NULL;
		return (token);
	}

	if (**stringp && !strchr_recursion(delim, **stringp))
	{
		token = *stringp;
		if (check_token(stringp, delim))
			return (token);
		return (token);
	}
	token = *stringp;
	**stringp = '\0';
	(*stringp)++;
	if (!*token)
		return (token);

	return (strsep_recursion(stringp, delim));
}
