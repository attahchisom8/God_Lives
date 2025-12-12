#include "main.h"

int main(void)
{
	char *s = "World!";

	{
		char *s = "Hello ";
		printf("%s", s);
	}
	printf("%s\n", s);
	
	return (0);
}
