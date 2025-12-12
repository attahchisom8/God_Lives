#include "main.h"


int main(void)
{
	char *s, *reject;
	char *s_arr[] = {"wow cool, i am going to woork", "banana", "Emaka is a footballer", "Bravo by Gods grace i solved it!", "testing empty substring", "No substring is to be found", NULL};
	char *reject_arr[] = {"wow c", "nab", "is", "by", "", "no", NULL};
	int k;
	size_t size = sizeof(s_arr) / sizeof(s_arr[0]), len_bytes;

	for (k = 0; k < size; k++)
	{
		s = s_arr[k];
		reject = reject_arr[k];
		len_bytes = _strcspn(s, reject);
		printf("main string: '%s'\n", s);
		printf("reject: string providing bytes for matcjing: '%s'\n", reject);
		printf("number of matching bytes in the initial segment of main string not from reject: %zu\n\n", len_bytes);
	}

	return (0);
}
