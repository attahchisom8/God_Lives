#include "main.h"


int main(void)
{
	const char *s, *s_arr[] = {"good", "wondwrful", "oh my my, great!", ""};
	size_t len, k,  size = sizeof(s_arr) / sizeof(s_arr[0]);

	for (k = 0; k < size; k++)
	{
		s = s_arr[k];
		len = strlen_recursion(s);
		printf("Given string: '%s'\n", s);
		printf("length of strinf: %zu\n", len);
	}

	return (0);
}
