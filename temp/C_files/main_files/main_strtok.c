#include "main.h"


int main(void)
{
	char str[] = "God ;;is;;+ great;;", *token;
	char str2[] = "+; ";
	char *delim;
	int d = 0, k;
	size_t size = sizeof(str) / sizeof(str[0]);

	printf("original string: ");
	for (k = 0; k < size; k++)
		printf("%c", str[k]);
	printf("\n");
	delim = str2;
	token = _strtok2(str, delim);
	printf("first call to _strtok; token: '%s'\n", token);

	while ((token = _strtok2(NULL, delim)))
	{
		d++;
		printf("%d subsequent calls: '%s'\n", d, token);
	}

	return (0);
}
