#include "main.h"


int main(void)
{
	char *dest_arr[] = {"Obi went", "Ada knows", "God"};
	char *src_arr[] = {" to school", " how to cook", " is great"};
	char *dest, *src, *res;
	size_t ssize = 0, size = sizeof(dest_arr) / sizeof(dest_arr[0]);
	int k;

	for (k = 0; k < size; k++)
	{		
		src = src_arr[k];
		dest = dest_arr[k];
		ssize += 3;
		printf("number of bytes to concertenate: %zu\n", ssize);
		printf("dest string: '%s'\n", dest);
		printf("source string: '%s'\n", src);
		res = _strncat(dest, src, ssize);
		if (res)
			printf("%d concertenation: '%s'\n", k + 1, res);

		free(res);
	}

	return (0);
}
