#include "main.h"

int main(void)
{
	char *str, *new_str;

	str = "Very Good";
	new_str = _strdup(str);

	printf("Address of str: %p\n", str);
	printf("Value of str: %s\n\n", str);
	printf("Address of new_str: %p\n", new_str);
	printf("value of new_str: %s\n\n", new_str);
	free(new_str);

	return (0);
}
