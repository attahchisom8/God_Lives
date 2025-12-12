#include "main.h"


int main(void)
{
	char *s = "A copy";
	char *dest = malloc(sizeof(char) * _strlen(s) + 1);
	char *cpy;

	if (!dest)
		return (1);

	cpy = _strcpy(dest, s);
	printf("orihinal string: %s\n", s);
	printf("address of original string: %p\n", s);
	printf("copied string: %s\n", cpy);
	printf("address of copied string: %p\n", cpy);
	free(dest);

	return (0);
}
