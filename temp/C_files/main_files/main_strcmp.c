#include "main.h"


int main(void)
{
	int d;
	char *s1_arr[] = {"abx", "ddh", "fyu", "adeugdh", "good", "sh"};
	char *s2_arr[] = {"ab", "dch", "yu", "gshdh", "good", ";"};
	char *s1, *s2;
	size_t size = sizeof(s1_arr) / sizeof(s1_arr[0]);
	int k;

	for (k = 0; k < size; k++)
	{
		s1 = s1_arr[k];
		s2 = s2_arr[k];
		d = _strcmp(s1, s2);
		printf("s1: %s\ts2: %s\n", s1, s2);
		printf("valie of _strcmp: %d\n", d);
	}

	return (0);
}
