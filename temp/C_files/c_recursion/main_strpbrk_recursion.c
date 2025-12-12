#include "main.h"


int main(void)
{
	char *accept, *s = "sgsjsgOsy68ebskdb+$($6+#jq", *located;
	char *accept_arr[] = {"ed", "123", "dgh", "y&&$", "",  NULL};
	int k;

	for (k = 0; accept_arr[k]; k++)
	{
		accept = accept_arr[k];
		located = strpbrk_recursion(s, accept);

		printf("oringinal string: %s\n", s);
		printf("striing from located byte: %s\n", located);
		printf("searching criteria: %s\n\n\n", accept);
	}

	return (0);
}

