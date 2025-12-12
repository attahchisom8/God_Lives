#include "main.h"


int main(void)
{
	int arr_byte[] = {'e', 'f', 'd', 1, 2, '+', 'a', 'c', '\0'}, k;
	size_t size = sizeof(arr_byte) / sizeof(arr_byte[0]);
	char *s = "agsu82cnsh+1ae73&uekgd\0g", *found;

	for (k = 0; k < size; k++)
	{
		int c = arr_byte[k];

		found = _strrchr(s, c);
		printf("The given string: %s\n", s);
		printf("string at last occurrence of byte: %s\n", found);
		printf("value of searched byte: %c\n\n\n", (char)c);
	}

	return (0);
}
