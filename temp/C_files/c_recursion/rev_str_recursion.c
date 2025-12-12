#include "main.h"


/**
 * _rev_str_helper - help fix pointers at start and end and return when they meet
 * @start: beging pointer
 * @end: end pointer
 *
 * Return: void
 */

void rev_str_helper(char *start, char *end)
{
	char temp;

	if (start >= end)
		return;

	temp = *start;
	*start = *end;
	*end = temp;

	rev_str_helper(start + 1, end - 1);
}

/**
 * rev_str_recursion - reverses a string
 * @s: string to reverse
 *
 * Return: pointer to the reversed string
 */

char *rev_str_recursion(char *s)
{
	char *end;

	end = s + strlen_recursion(s) - 1;
	rev_str_helper(s, end);

	return (s);
}


