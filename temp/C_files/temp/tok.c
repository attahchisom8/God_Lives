#include "main.h"


/**
 * _strtok - fubction to break strings into string tokens
 * @str: string to be parsed
 * @delim: provide us with charactets to brrak the string with
 *
 * Return: pointer fo the current token
 */

char *save_str;

char *_strtok(char *str, const char *delim){
	size_t len_token = 0;
	char *temp, *temp2, *token;

	if (!str)
		str = save_str;
	if (!_strcmp(str, delim) || *str == '\0')
		return (NULL);
	if (str)
		save_str = str;

	while (*save_str != '\0')
	{
		/* if the begining of the string is a delimter, skip tje delimeters*/
		while (strchr(delim, *save_str))
			save_str++;

		/* Get the length of each token */
		temp = save_str;
		while (!_strchr(delim, *temp))
		{
			len_token++;
			temp++;
		}

		/* Allocate memory for the tkken */
		if (len_token)
		{
			token = malloc(len_token + 1);
			if (!token)
				return (NULL);
			len_token = 0;

		/* Assign value to the token  b4 we hit delimwter byte*/
		token = save_str;
			while (!_strchr(delim, *save_str))
				save_str++;
			*save_str = '\0';

		/* save_str now points to a  delimeter, if thwre other concurent delimer after it, we skip all the delimeters */
			while (*save_str != '\0' && _strchr(delim, *save_str))
				save_str++;
			return (token);
		}
		else
			break;
	}

	return (NULL);
}
