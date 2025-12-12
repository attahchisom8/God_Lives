#include <stdio.h>


int count(int num)
{
	int k = 0, p;

	while (k < num)
	{
		p = k++;
		printf("%d, ", p);
	}
	printf("%d\n", k);

	return (p);
}

int count2(int num)
{
	int k = 0, p;

	while (k < num)
	{
		p = ++k;
		printf("%d, ", p);
	}
	printf("%d\n", k);

	return (p);
}

int main(void)
{
	int num = 10, num1, num2;

	num1 = count(num);
	num2 = count2(num);

	printf("count k++\n");
	printf("%d\n", num1);
	printf("count ++k\n");
	printf("%d\n", num2);

	return (0);
}
