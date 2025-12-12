#include "main.h"


int main(void)
{
	char *heystack, *needle, *first_substr;
	char *heystack_arr[] = {"wow cool, i am going to woork", "Emaka is a footballer, isn't he?", "Bravo by Gods grace i solved it!", "testing empty substring", "No substring is to be found, i reapeate none!", NULL};
	char *needle_arr[] = {"cool", "is", "by", "", "no", NULL};
	int k;
	size_t size = sizeof(heystack_arr) / sizeof(heystack_arr[0]);

	for (k = 0; k < size; k++)
	{
		heystack = heystack_arr[k];
		needle = needle_arr[k];
		first_substr = strstr_recursion(heystack, needle);
		printf("main string: '%s'\n", heystack);
		printf("substring we seek: '%s'\n", needle);
		printf("first occuring substring: '%s'\n\n", first_substr);
	}

	return (0);
}
