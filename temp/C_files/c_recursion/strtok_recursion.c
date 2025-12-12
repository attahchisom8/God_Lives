#include "main.h"


/**
 * xheck token - check if a string is tokenixable
 * @ptr: pointer that recieves a pointer and modifies it address
 * @delim: A string of delimiting bytes
 *
 * Return: 1 if its tokenuzable else 0
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
 * etrtok_helper - helps strtok keep track of its static variable over recursive calls
 * @save_s: pointer pointing to a pointer of a static variable
 * @delim: delimeter string
 *
 * Return: pointer to the token
 */

char *strtok_helper(char **save_s, const char *delim)
{
	char *token;

	if (!**save_s)
        	return (NULL);

	if (!strchr_recursion(delim, **save_s))
        {
                token = *save_s;
		if (check_token(save_s, delim))
			return (token);

		return (NULL);
        }
	(*save_s)++;

	return (strtok_helper(save_s, delim));
}


/**
 * _strtok2 - breaks a string into tokens
 * @str: string to be broken
 * @delim: delimeter string to break it with
 *
 * The logic for this strtok is as followa
 * --> 1) skip leading delimeters in str
 *  --> 2) if if the pointer now points to the nullbbyte return NULL
 *  --> 3) start searching for tokens
 *  --> 4) Advance the pointer only when a token is found and the next byte is
 *  not the null byte
 *  --> 5) finally return the token
 *
 *  Return: pointer to the current token
 */

char *strtok_recursion(char *str, const char *delim)
{
	static char *save_str = NULL;

	if (str)
		save_str = str;

	if (!save_str)
		return (NULL);

	return (strtok_helper(&save_str, delim));
}


