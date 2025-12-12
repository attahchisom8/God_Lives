#include "main.h"


int main(void)
{
	int num, exp;

	num = 10, exp = 3;
	printf("%d raise to power %d = %lld\n", num, exp, _pow(num, exp));

	return (0);
}
