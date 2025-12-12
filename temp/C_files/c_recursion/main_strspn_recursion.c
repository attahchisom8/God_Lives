#include "main.h"


int main(void)
{
	char *s, *accept;
	char *s_arr[] = {"wow cool, i am going to woork", "banana", "Emaka is a footballer", "Bravo by Gods grace i solved it!", "testing empty substring", "No substring is to be found", NULL};
	char *accept_arr[] = {"wow c", "nab", "is", "by", "", "no", NULL};
	int k;
	size_t size = sizeof(s_arr) / sizeof(s_arr[0]), len_bytes;

	for (k = 0; k < size; k++)
	{
		s = s_arr[k];
		accept = accept_arr[k];
		len_bytes = strspn_recursion(s, accept);
		printf("main string: '%s'\n", s);
		printf("accept: string providing bytes for matcjing: '%s'\n", accept);
		printf("number of matching bytes in the initial segment of main string from accept: %zu\n\n", len_bytes);
	}

	return (0);
}
