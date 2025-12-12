#include "main.h"


int main(void)
{
	int d;
	char *s1_arr[] = {"abx", "ddh", "fyu", "adeugdh", "good", "sh", "Man", "kRastiNe", "cartooning"};
	char *s2_arr[] = {"ab", "dch", "yu", "gshdh", "good", ";", "man", "seclude", "cartooking"};
	char *s1, *s2;
	size_t size = sizeof(s1_arr) / sizeof(s1_arr[0]), n;
	int k;

	for (k = 0; k < size; k++)
	{
		s1 = s1_arr[k];
		s2 = s2_arr[k];
		n = 10;
		d = _strncmp(s1, s2, n);
		printf("s1: %s\ts2: %s\t no. of bytes to compare: %zu\n", s1, s2, n);
		printf("valie of _strncmp: %d\n", d);
	}

	return (0);
}
