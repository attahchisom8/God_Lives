#include "main.h"


int queen = 1;


/**
 * is_safe: checks the safyey of current column by checkingbprevious colums,
 * @board: An N x N chessboard
 * main diagonal and anti diagonal
 * @curr_row: current row
 * @curr_col: current column
 *
 * (k, curr_col): coordinates of previous rows under the same colunn
 * (curr_row - k, curr_col - k): cordinates  of main diagonal above (curr_row, curr_col)
 * (curr_row - k, curr_col + k): coordinates of anti-diqgonal above (curr_row, curr_col)
 *
 * Return: true if the current column is safe to place a queena
 */

bool is_safe(int **board, size_t curr_row, size_t curr_col, size_t N)
{
	size_t k;

	for (k = 0; k < curr_row; k++)
	{
		if (board[k][curr_col] == queen)
			return (false);
	}

	for (k = 1; k <= curr_row && k <= curr_col; k++)
	{
		if (board[curr_row - k][curr_col - k] == queen)
			return (false);
	}

	for (k = 1; k <= curr_row && (curr_col + k) < N; k++)
	{
		if (board[curr_row - k][curr_col + k] == queen)
			return (false);
	}

	return (true);
}


/**
 * backtrack - check the each row to place a queen, if we reach a dead end, we move back
 * to the previous row
 * @curr_row: current row
 * @N: size of each colunn
 *
 * Return: void
 */

int backtrack(int **board, size_t curr_row, size_t N)
{
	size_t col;

	if (curr_row == N)
		return (1);

	for (col = 0; col < N; col++)
	{
		if (is_safe(board, curr_row, col, N))
		{
			board[curr_row][col] = queen;
			if (backtrack(board, curr_row + 1, N))
				return (1);
			board[curr_row][col] = 7;
		}
	}

	return (0);
}


/**
 * nqueens - tries to put N queens in non tracking coordinates i.e no two queens can
 * stay in the same row, column or diagonal
 * @N: size of a col or row of an N x N matrix
 *
 * Return: a double pointer to the chessboard
 */

int **nqueens(size_t N)
{
	int **board;
	size_t k;

	board = malloc(N * sizeof(int *));
	if (!board)
		return (NULL);

	for (k = 0; k < N; k++)
	{
		board[k] = calloc(N, sizeof(int));
		if (!board[k])
		{
			size_t p;

			for (p = 0; p < k; p++)
				free(board[p]);
			free(board);

			return (NULL);
		}
	}

	if(!backtrack(board, 0, N))
	{
		for (k = 0; k < N; k++)
			free(board[k]);
		free(board);

		return (NULL);
	}

	return (board);
}


int main(void)
{
	int **board;
	size_t row, col, N, k;

	N = 10;
	board = nqueens(N);

	for (row = 0; row < N; row++)
	{
		for (col = 0; col < N; col++)
		{
			printf("%d%s", board[row][col], (col < N - 1) ? ", " : "\n");
		}
	}

	for (k = 0; k < N; k++)
		free(board[k]);
	free(board);
}
