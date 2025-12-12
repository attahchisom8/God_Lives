#include "main.h"


int main(void)
{
	char str[] = ";;God ;;is;;+ great;;;;", *token;
	char str2[] = "+; ", *ptr = str;
	char *delim;
	int d = 0;
	// size_t size = sizeof(str) / sizeof(str[0]);

	printf("original string: '%s'\n", str);
	delim = str2;

	while ((token = strsep_recursion(&ptr, delim="")))
	{
		if (*token)
		{
			d++;
			printf("%d subsequent calls: '%s'\n", d, token);
		}
	}

	return (0);
}
