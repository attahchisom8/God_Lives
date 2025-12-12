#include "main.h"


int main(void)
{
	int row, col, num = 0;

	for (row = 0; row < 5; row++)
	{
		for (col = 0; col <= row; col++)
		{
			num++;
			printf("%d%s", num, (col < row) ? " " : "\n");
		}
	}

	return (0);
}
