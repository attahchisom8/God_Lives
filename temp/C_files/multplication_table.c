#include "main.h"


/**
 * multiplication_table - fuction to print q muktiplication table horizontally
 * @row: row of the table
 * @col: colunn of the table
 *
 * Return: void
 */

void multiplication_table(int row, int col)
{
	int r, c;

	for (r = 1; r <= row; r++)
	{
		int mult;

		for (c = 1; c <= col; c++)
		{
			mult = r * c;
			printf("%d x %d = %d\t", c, r, mult);
		}
		printf("\n");
	}
	printf("\n");
}


/**
 * multiplication_table2 - function to print multipkication table vertically
 * @row: row of the table
 * @col: column of the table
 *
 * Return: void
 */

void multiplication_table2(int row, int col)
{
	int r, c;

	for (r = 1; r <= row; r++)
	{
		int mult;

		for (c = 1; c <= col; c++)
		{
			mult = r * c;
			printf("%d x %d = %d\n", r, c, mult);
		}
		printf("\n");
	}
	printf("\n");
}
