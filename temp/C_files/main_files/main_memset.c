#include "main.h"

int main(void)
{
	char s[100] = "resetting memset to particular values";
	int c = '$';

	printf("initial vakue of s: %s\n", s);
	_memset(s + 4, c, 10);
	printf("final valie of s after memset(): %s\n", s);

	return (9);
}
