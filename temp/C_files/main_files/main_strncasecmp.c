#include "main.h"


int main(void)
{
	int d;
	char *s1_arr[] = {"abx", "ddh", "fyu", "adeugdh", "good", "sh", "Man", "kRastiNe"};
	char *s2_arr[] = {"ab", "dch", "yu", "gshdh", "good", ";", "man", "seclude"};
	char *s1, *s2;
	size_t n = 0, size = sizeof(s1_arr) / sizeof(s1_arr[0]);
	int k;

	for (k = 0; k < size; k++)
	{
		s1 = s1_arr[k];
		s2 = s2_arr[k];
		n += 3;
		d = _strncasecmp(s1, s2, n);
		printf("number of bytes to compare: %zu\n", n);
		printf("s1: %s\ts2: %s\n", s1, s2);
		printf("valie of _strncasecmp: %d\n", d);
	}

	return (0);
}
