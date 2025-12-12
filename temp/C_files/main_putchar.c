#include "main.h"


int main(void)
{
	int k;

	for (k = 65; k <= 122; k++)
	{
		_putchar(k);
		if (k == 90 || k == 96)
			_putchar('\n');
	}
	_putchar('\n');

	return (0);
}
