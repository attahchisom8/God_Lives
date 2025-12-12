#include "main.h"


int main(void)
{
	char *s_arr[] = {"A copy", "This is great", "oh oh my"}, *s;
	char *dest, *cpy;
	size_t size = sizeof(s_arr) / sizeof(s_arr[0]), buff_size = 0, dsize = 0;
	int k;

	for (k = 0; k < size; k++)
	{
		s = s_arr[k];
		buff_size += 3, dsize += 10;
		dest = malloc((buff_size + size) * sizeof(char));
		if (!dest)
			return (1);

		cpy = _strncpy(dest, s, dsize);
		printf("orihinal string: '%s'\n", s);
		printf("address of original string: %p\n", s);
		printf("number of bytes to copy: %zu\n", dsize);
		printf("copied string: '%s'\n", cpy);
		printf("address of copied string: %p\n", cpy);
		free(dest);
	}

	return (0);
}
