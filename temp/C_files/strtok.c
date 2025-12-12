#include "main.h"


/**
 * _strtok - fubction to break strings into string tokens
 * @str: string to be parsed
 * @delim: provide us with charactets to brrak the string with
 *
 * Return: pointer fo the current token
 */

char *_strtok(char *str, const char *delim){
	 char *token;
	 static char *save_str;

	if (!str)
		str = save_str;

	if (!delim || *delim == '\0')
		return (NULL);

	if (!_strcmp(str, delim) || *str == '\0')
		return (NULL);

	if (str)
		save_str = str;
	if (!save_str)
		return (NULL);

	while (*save_str != '\0')
	{
		/* if the begining of the string is a delimter, skip tje delimeters*/
		while (strchr(delim, *save_str))
			save_str++;


		/* overwrite subsequent delimeters with null byte when encountered */
		token = save_str;
		while (!_strchr(delim, *save_str))
			save_str++;
		*save_str = '\0';
		if (*(save_str + 1) != '\0')
			save_str++;
		else
			break;

		/* if there are other concurent delimer after it, we skip all the delimeters */
		while (_strchr(delim, *save_str))
			save_str++;

		return (token);
	}

	return (NULL);
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

char *_strtok2(char *str, const char *delim)
{
	static char *save_str = NULL;
	char *token;

	if (str)
		save_str = str;

	while (*save_str != '\0' && _strchr(delim, *save_str))
		save_str++;

	if (*save_str == '\0')
		return (NULL);

	token = save_str;
	while (*save_str != '\0' && !_strchr(delim, *save_str))
		save_str++;

	if (*save_str != '\0')
	{
		*save_str = '\0';
		save_str++;
	}

	return (token);
}
