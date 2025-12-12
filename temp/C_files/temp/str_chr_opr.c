#include "main.h"


/**
 * is_digit - checks if a charqcter is digitizable
 * @c: character to check for digitization
 *
 *
 * Retirn: True uf digitizable, else False
 */

bool is_digit(char c)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		if  (c == k)
			return (true);
	}

	return (false);
}


/**
 * to_digit - digitize a character (convert it to digit)
 * @c: character to convert to digit
 *
 * Return: the converted digit
 */

int to_digit(char c)
{
	if (c == '\0')
		return (0);
	return (c - '0');
}


/**
 * to_char - convert an interger to character
 * @n: interger we wish to convert
 *
 * Return: the character or ascii number of the digit
 */

char to_char(int n)
{
	return (n + '0');
}


/**
 * digits_len - get the number of digitixable characters in a string
 * @str: pointer to the given string
 *
 * Return: number of digitizable characters
 */

size_t digits_len(const char *str)
{
	size_t len = 0;


	while (*str != '\0')
	{
		if (is_digit(*str))
			len++;
		str++;
	}

	return (len);
}


/**
 * extract_digits - extract digits from string and create a new atring with it
 * @str: string to extract digits
 *
 * Return: A pointer to the digitizable string
 */

char *extract_digits(const char *str)
{
	int len_digits;
	char *digits_str, *temp;

	len_digits = digits_len(str);
	if (!len_digits)
		return (0);

	digits_str = malloc(len_digits + 1);
	if (!digits_str)
		return (0);

	temp = digits_str;
	while (*str != '\0')
	{
		if (is_digit(*str))
		{
			*temp = *str;
			temp++;
		}
		str++;
	}
	*temp = '\0';

	return (digits_str);
}


/**
 * is_lower - checks if a given character is a lower case
 * @c: character to check
 *
 * Return: true ifvits a lower case characyer else false
 */

bool is_lower(char c)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		if (c == k)
			return (true);
	}

	return (false);
}


/**
 * is_upper - checks if a characer is an upper case
 * @c: char to check
 *
 * Return: true if upper  wlse false
 */

bool is_upper(char c)
{
	int k;

	for (k = 65; k <= 90; k++)
	{
		if (c == k)
			return (true);
	}

	return (false);
}


/**
 * is_alphabet - checks if a character is an alphabet
 * @c: hiven chaaracter to check
 *
 * Return: true if alphabet else falss
 */

bool is_alphabet(char c)
{
	int k;

	for (k = 65; k <= 90; k++)
	{
		if (c == k)
			return (true);
	}

	for (k = 97; k <= 122; k++)
	{
		if (c == k)
			return (true);
	}

	return (false);
}


/**
 * to_lower - convwrts upper case alphabets to lower case
 * @c: uppwr case character
 *
 * Return: a lower case character
 */

char to_lower(char c)
{
	int k;

	for (k = 65; k <= 90; k++)
	{
		if (c == k)
			return (c + 32);
	}

	return (c);
}


/**
 * to_upper - converts a lower case to upper case
 * @c: a lower case alphabetic charactwr
 *
 * Return: a upper case character
 */

char to_upper(char c)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		if (c == k)
			return (c - 32);
	}

	return (c);
}
