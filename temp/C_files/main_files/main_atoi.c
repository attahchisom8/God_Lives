#include "main.h"


int main(void)
{
	int num, k;
	char *s[] = {"wonderful", "goo3d", "$$###67", "gayshshsu658gzhsg+#+&#;$(888", "1234;--#-*&&($&#(#&#($++jsgg5", "", "egg524rfg9gsh728gs50hnz6u810h", NULL};

	for (k = 0; s[k]; k++)
	{
		num = _atoi(s[k]);
		printf("denary value of '%s': %d\n", s[k], num);
	}
	printf("%d\n", _atoi(""));

	return (EXIT_SUCCESS);
}
