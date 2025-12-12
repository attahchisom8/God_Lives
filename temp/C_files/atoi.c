#include "main.h"


/**
 * _atoi - convert digitizable characters in a string to a denary number based on
 * position in the string
 * @str: pojnter to the given string
 *
 * Return: a denary number (numeral)
 */

long long _atoi(const char *str)
{
	size_t len_digits = digits_len(str);
	char *digits_str, *ptr;
	int k;
	long long denary_sum = 0;

	if (!len_digits)
		return (0);
	digits_str = extract_digits(str);

	k = len_digits - 1;
	ptr = digits_str;
	while (k >= 0) 
	{
		int digit;

		digit = to_digit(*ptr);
		denary_sum += digit * _pow(10, k);
		k--;
		ptr++;

	}
	free(digits_str);

	return (denary_sum);
}
