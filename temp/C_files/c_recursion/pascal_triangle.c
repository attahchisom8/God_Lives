#include "main.h"


int **create_triangle(size_t n);

/**
 * pascal_triangle - function that computes values of the pascal triangle in a triangle.@n: size of the yriangle
 *
 * Return: double pointer to the computed triangle
 */

int **pascal_triangle(size_t n)
{
	int row, col, **triang;;

	triang = create_triangle(n);
	if (!triang)
		return (NULL);

	for (row = 0; row < n; row++)
		triang[row][0] = 1;

	for (row = 1; row < n; row++)
	{
		for (col = 1; col <= row; col++)
		{
			if (col == row)
				triang[row][col] = 1;
			else
				triang[row][col] = triang[row - 1][col -1] + triang[row - 1][col];
		}
	}

	return (triang);
}


/**
 * create_triangle - create a triangle
 * @n: size of the triangle
 *
 * Return: A triangle with entries filed with 0's
 */

int **create_triangle(size_t n)
{
	size_t row, k;
	int **triangle;

	if (!n)
		return (NULL);

	triangle = malloc(n * sizeof(int *));
	if (!triangle)
		return (NULL);

	for (row = 0; row < n; row++)
	{
		triangle[row] = calloc(row + 1, sizeof(int));
		if (!triangle[row])
		{
			for (k = 0; k < row; k++)
				free(triangle[k]);
			free(triangle);

			return (NULL);
		}
	}

	return (triangle);
}


/**
 * print_triangle - print values of a triangle
 *
 * Return: boid
 */

void print_triangle(int **triangle, size_t n)
{
	size_t row, col;

	for (row = 0; row < n; row++)
	{
		for (col = 0; col <= row; col++)
			printf("%d%s", triangle[row][col], (col < row) ? " ": "\n");
	}
}


int main(int argc, char **argv)
{
	size_t num, k;
	int **triang;

	if (argc != 2)
	{
		fprintf(stderr, "./filename number%s", "\n");
		exit(EXIT_FAILURE);
	}

	num = atoi(argv[1]);
	triang = pascal_triangle(num);
	if (!triang)
	{
		for (k = 0; k < num; k++)
			free(triang[k]);
		free(triang);

		exit(EXIT_FAILURE);
	}
	print_triangle(triang, num);

	exit(EXIT_SUCCESS);
}
