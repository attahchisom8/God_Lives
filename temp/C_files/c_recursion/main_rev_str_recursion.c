#include "main.h"


int main(void)
{
	char *s, s_arr[][50] = {"good", "wonderful", "oh my my, great!", ""};
	size_t k,  size = sizeof(s_arr) / sizeof(s_arr[0]);

	for (k = 0; k < size; k++)
	{
		s = s_arr[k];
		printf("Given string: '%s'\n", s);
		rev_str_recursion(s);
		printf("revwrsed string: '%s'\n", s);
	}

	return (0);
}
