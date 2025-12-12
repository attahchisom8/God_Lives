#include "main.h"


/**
 * _pow - function to multiply the same numeral a certain number of times
 * @num: number to mutiply
 * @exp: number of times to mutiply the number
 *
 * Return: the result of the operation
 */

long long _pow(int num, int exp)
{
	long long res = 1;
	int k;

	for (k = 0; k < exp; k++)
	{
		res *= num;
	}

	return (res);
}
