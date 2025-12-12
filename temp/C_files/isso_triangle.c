#include "main.h"


/**
 * xreate_isso_triangle - create space just enough to fit an issocelece 
 * @size: dize of an the triangle
 *
 * Return: The created spqce for the triangle
 */

int **create_isso_triangle(size_t size)
{
	int **triang, row, k;

	triang = malloc(size * sizeof(int *));
	if (!triang)
		return (NULL);

	for (row = size - 1; row >= 0; row--)
	{
		triang[row] = malloc((row + 1) * sizeof(int));
		if (!triang[row])
		{
			for (k = size - 1; k >= row; k--)
				free(triang[row]);
			free(triang);

			return (NULL);
		}
	}

	return (triang);
}


/**
 * isso_triangle - allocates data tbat constructs the issocelace triangle
 * @size: size of the triangle
 *
 * Return: the contructed issocelace triangle
 */

int **isso_triangle(size_t size)
{
	int **isso, num = 1, row, col;
	size_t s_size;

	if (!size)
		return (NULL);

	isso = create_isso_triangle(size);
	if (!isso)
		return (NULL);

	for (row = size - 1; row >= 0; row--)
	{
		col = 0;
		while (col <= row - 1)
		{
			isso[row][col] = 0;
			col++;
		}
		isso[row][col] = num;
		num++;
	}

	return (isso);
}

/**
 * print_isso - prints an isso triangle
 * @isso - the assolace triangle
 * @size: size of tbe assolace trjangle
 *
 * Return: void
 */

void print_isso(int **isso, size_t size)
{
	int row, col;

	if (!isso)
		return;

	for (row = size - 1; row >= 0; row--)
	{
		for (col = 0; col <= row; col++)
			printf("%d%s", isso[row][col], (col < row) ? " ": "\n");
	}
}

int main(int ac, char **av)
{
	size_t size;
	int **triang, k;

	if (ac != 2)
	{
		fprintf(stderr, "usage %s num\n", av[0]);
		exit(EXIT_FAILURE);
	}

	size = atoi(av[1]);
	triang = isso_triangle(size);
	if (!triang)
	{
		for (k = size - 1; k >= 0; k--)
			free(triang[k]);
		free(triang);
		printf("Malloc() dailed!\n");
		exit(EXIT_FAILURE);
	}

	print_isso(triang, size);

	exit(EXIT_SUCCESS);
}
