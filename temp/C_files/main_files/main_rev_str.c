#include "main.h"

int main(void)
{
	char s[] = "father", *rev;

	rev = rev_str(s);

	printf("%s\n", rev);
	return (0);
}
