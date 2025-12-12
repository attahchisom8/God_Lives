#include "main.h"


int main(void)
{
	char *arr1[] = {"1-*(7:2882!9", "", "&#+627", "gsh627", "1295", NULL};
	char *arr2[] =  {"gjdj6g77bxh238vshzu6ed78", "", "", "0", "8998", NULL};
	char *s1, *s2, *result_str;
	long long sum, sum1;
	int k;

	for (k = 0; arr1[k]; k++)
	{
		s1 = arr1[k];
		s2 = arr2[k];
		sum = sum_large_nums_with_atoi(s1, s2);
		sum1 = sum_large_nums_without_atoi(s1, s2);
		result_str = sum_large_nums_as_str(s1, s2);
		printf("numerical value of '%s': %llu\nnumerical value of ©f '%s': %llu\n", s1, _atoi(s1), s2, _atoi(s2));
		printf("sum using function - 'sum_large_nums_with_atoi': %llu\n", sum);
		printf("sum using - function 'sum_large_nums_without_atoi': %llu\n", sum1);
		printf("sum using function - 'sum_large_nums_as_str': %s\n", result_str);
		free(result_str);
	}

	return (0);
}
