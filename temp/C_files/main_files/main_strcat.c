#include "main.h"


int main(void)
{
	char *dest, *s1, *s2, *res, *temp_res;

	dest = "God",s1 = " lives", s2 = "!";

	res = _strcat(dest, s1);
	if (res)
		printf("firts concertenation: %s\n", res);

	temp_res = res;
	res = _strcat(temp_res, s2);
	if (res)
	{
		printf("second concertenation: %s\n", res);
	free(res);
	}
	free(temp_res);

	return (0);
}
