#include "main.h"


/**
 * sum_large_sums_with_atoi - sums a large number of digitizable xharacters within
 * two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: sum of the digitizable characters
 */

long long sum_large_nums_with_atoi(char *str1, char *str2)
{
	long long sum;

	sum = _atoi(str1) + _atoi(str2);

	return (sum);
}


/**
 * make_str_digits_len_equal - This function takes two string, separates them
 * into digitizable string and fill the shotest one with 0 from the begining
 * until its length is equal fo the other string
 * in two strings without using atoi
 * @str1: first string
 * @str2: second string
 *
 * Return: pointer to an array of workable digitizable equally lengthed strings
 */

char **make_str_digits_len_equal(char *str1, char *str2)
{
	int len1, len2, largest_digit, k;;
	char *largest_str, *digits_str1, *digits_str2;
	char **digits_arr = malloc(2 * sizeof(char *));;

	if (!digits_arr)
		return (NULL);

	digits_str1 = extract_digits(str1);
	if (!digits_str1)
		return (NULL);

	digits_str2 = extract_digits(str2);
	if (!digits_str2)
		return (NULL);

	len1 = _strlen(digits_str1);
	len2 = _strlen(digits_str2);

	if (len1 >= len2)
	{
		char *temp1, *temp2;

		largest_digit = len1;
		largest_str = malloc(largest_digit + 1);
		if (!largest_str)
		{
			free(digits_str1);
			free(digits_str2);
			free(digits_arr);
			return (NULL);
		}
		temp1 = largest_str;
		temp2 = digits_str2;
		for (k = 0; k < (len1 - len2); k++)
		{
			*temp1 = '0';
			temp1++;
		}

		for (k = (len1 - len2); k < largest_digit; k++)
		{
			*temp1 = *temp2;
			temp1++;
			temp2++;
		}
		*temp1 = '\0';
		free(digits_str2);
		digits_arr[0] = digits_str1;
		digits_arr[1] = largest_str;

		return (digits_arr);
	}
	else
	{
		char *temp3, *temp4;

		largest_digit = len2;
		largest_str = malloc(largest_digit + 1);
		if (!largest_str)
		{
			free(digits_str1);
			free(digits_str2);
			free(digits_arr);

			return (NULL);
		}

		temp3 = largest_str;
		temp4 = digits_str1;
		for (k = 0; k < (len2 - len1); k++)
		{
			*temp3 = '0';
			temp3++;
		}
		for (k = (len2 - len1); k < largest_digit; k++)
		{
			*temp3 = *temp4;
			temp3++;
			temp4++;
		}
		*temp3 = '\0';
		free(digits_str1);
		digits_arr[0] = largest_str;
		digits_arr[1] = digits_str2;

		return (digits_arr);
	}

	return (NULL);
}

/**
 * sum_large_nums_eithout_atoi - sums digitizable chars in two strings without
 * calling atoi
 * @str: first string
 * @str2: second string
 *
 * Return: sum of the digitjzable characters
 */

long long sum_large_nums_without_atoi(char *str1, char *str2)
{
	long long sum = 0;
	int temp_sum, carry_over = 0, used_carry_over = 0;
	int digit1, digit2, len, k, rem = 0;
	char **digits_arr, *digits_str1, *digits_str2, *temp1, *temp2;

	if (!str1 || *str1 == '\0')
		str1 = "0";
	if (!str2 || *str2 == '\0')
		str2 = "0";

	digits_arr = make_str_digits_len_equal(str1, str2);
	if (!digits_arr)
		return (0);

	digits_str1 = digits_arr[0];
	digits_str2 = digits_arr[1];

	temp1 = digits_str1, temp2 = digits_str2;
	while (*temp1 != '\0')
		temp1++;
	while (*temp2 != '\0')
		temp2++;

	temp1--;
	temp2--;
	len = _strlen(digits_str1);
	for (k = 0; k < len; k++)
	{
		digit1 = to_digit(*temp1);
		digit2 = to_digit(*temp2);
		temp_sum = digit1 + digit2;

		if (temp_sum < 10)
		{
			rem = temp_sum;
			sum += (rem + carry_over) * _pow(10, k);
			carry_over = used_carry_over;
		}
		else
		{
			rem = temp_sum % 10;
			sum += (rem + carry_over) * _pow(10, k);
			carry_over = used_carry_over;
		}
		carry_over = temp_sum / 10;

		temp1--;
		temp2--;
	}
	for (k = 0; k < 2; k++)
		free(digits_arr[k]);
	free(digits_arr);

	return (sum);
}


/**
 * sum_large_nums_as_str - sums large numbers in given string and store
 * the result as a string
 * @str1: first string
 * @str2: second string
 *
 * Return: the result of the sum as a string
 */

char *sum_large_nums_as_str(char *str1, char *str2)
{
	int sum, k, len, len2,  result_len;
	int digit1, digit2, carry = 0, rem;
	char **digits_arr, *digits_str1, *digits_str2, *result_str;
	char *temp1, *temp2, *temp3;

	if (!str1 || *str1 == '\0')
		str1 = "0";
	if (!str2 || *str2 == '\0')
		str2 = "0";

	digits_arr = make_str_digits_len_equal(str1, str2);
	if (!digits_arr)
		return (NULL);
	digits_str1 = digits_arr[0];
	digits_str2 = digits_arr[1];

	len = _strlen(digits_str1);
	len2 = len;
	result_len = len + 1;
	result_str = malloc(result_len + 1);
	if (!result_str)
		return (NULL);

	temp1 = digits_str1, temp2 = digits_str2, temp3 = result_str;
	while (*(temp1 + 1) != '\0') // same as *temp1 != '\0' then after loop temp1--
		temp1++;
	while (*(temp2 + 1) != '\0')
		temp2++;

	for (k = 0; k < len; k++)
	{
		digit1 = to_digit(*temp1);
		digit2 = to_digit(*temp2);
		sum = digit1 + digit2 + carry;
		rem = sum % 10;
		carry = sum / 10;
		*(temp3 + len2) = to_char(rem);
		len2--;
		temp1--;
		temp2--;
	}

	if (carry > 0)
	{
		*temp3 = to_char(carry);
		*(temp3 + result_len) = '\0';
	}
	else
	{
		for (k = 0; k < len; k++)
		{
			*temp3 = *(temp3 + 1);
			temp3++;
		}
		*temp3 = '\0';
	}
	free(digits_str1);
	free(digits_str2);
	free(digits_arr);

	return (result_str);
}
