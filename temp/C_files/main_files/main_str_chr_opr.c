#include "main.h"

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


