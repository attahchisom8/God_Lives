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

	return ('\0');
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

	return ('\0');
}

int main(void)
{
	char lower, upper, c;
	char lower_arr[] = {'a', 'c', 'd', 'x', 5, 7, '$', '+'};
	char upper_arr[] = {'A', 'B', 'E', 'P', 1, 3, '&', '-'};
	size_t size_lower = sizeof(lower_arr) / sizeof(lower_arr[0]);
	size_t size_upper = sizeof(upper_arr) / sizeof(upper_arr[0]);
	int k = 0;

	for (k = 0; k < size_lower; k++)
	{
		c = lower_arr[k];
		upper = to_upper(c);
		printf("given characer: '%c'\n", c);
		if (upper == '\0')
			printf("'%c' is not an albalphabet\n", c);
		else
			printf("A call to to_upper gives: %c\n", upper);
	}

	for (k = 0; k < size_upper; k++)
	{
		c = upper_arr[k];
		lower = to_lower(c);
		 printf("given characer: '%c'\n", c);
		 if (lower == '\0')
			 printf("'%c' is not an albalphabet\n", c);
		 else
			 printf("A call to to_lower gives: %c\n",lower);
	}

	return (0);
}


