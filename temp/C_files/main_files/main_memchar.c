#include "main.h"


int main(void)
{
	char *s1, *res1, *str;
	int *s2 = malloc(200 * sizeof(int)), *int_res;
	int c, k, *temp, num[] = {1, 3, 5, 8, 6, 1, 8, 2};
	size_t size;

	str = "abc121673h728gsh-$+*6+($7$8";
	s1 = _strdup(str);

	if (!s1)
		return (1);

	if (!s2)
		return (1);

	size = sizeof(num) / sizeof(num[0]);
	temp = s2;
	for (k = 0; k < size; k++)
	{
		*temp = num[k];
		temp++;
	}

	c = 'g';
	res1 = _memchr(s1, c, 77);
	printf("value of original string: %s\n", str);
	 printf("intial occurrebce of searching byte '%c': %s\n", c, res1);

	c = 8;
	int_res = (int *)_memchr(s2, c, size * sizeof(int));
	printf("value of original array of numbers: \n--> {");
	for (k = 0; k < size - 1; k++)
		printf("%d, ", num[k]);
	printf("%d}\n", num[size - 1]);
	printf("initial occurrence of searchibg byte '%d':\n --> {", c);
	if (int_res)
	{
		int past_idxs, pres_fut_idxs;

		past_idxs = int_res - s2;
		pres_fut_idxs = size - past_idxs;
		for (k = 0; k < pres_fut_idxs; k++)
		{
			printf("%d%s", *(int_res + k), (k < pres_fut_idxs - 1) ? ", ": "");

		}
		printf("}\n");
	}
	else
		printf("}\nsearching byte '%d' not found\n", c);
	printf("address of integwr value: %p\n", (void *)int_res);
	free(s1);
	free(s2);

	return (0);
}
