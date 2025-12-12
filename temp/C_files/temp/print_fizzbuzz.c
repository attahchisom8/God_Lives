#include "main.h"


/**
 * fizzbuzz - program to print fizz a numbet n, if n is divisibke by 3 print Fizz
 * and by five print Buzz and by both 3 and 5 print fizzBuzz
 * @n: number of to count
 *
 * Return: void
 */

void print_fizzbuzz(int n)
{
	int k;

	for (k = 1; k < n; k++)
	{
		if (!(k % 3) && k % 5)
			printf("Fizz, ");
		else if (k % 3 && !(k % 5))
			printf("Buzz, ");
		else if (!(k % 3) && !(k % 5))
			printf("FizzBuzz, ");
		else
			printf("%d, ", k);
	}

	if (!(k % 3) && k % 5)
		printf("Fizz.");
	else if (k % 3 && !(k % 5))
		printf("Buzz.");
	else if (!(k % 3) && !(k % 5))
		printf("FizzBuzz.");
	else
		printf("%d.\n", k);
}
