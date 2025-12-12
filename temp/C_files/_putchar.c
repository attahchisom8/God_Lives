#include "main.h"


/**
 * _putchar - write a character to stdout
 * @c: guven chqracter
 *
 * Return: the character written as unsigned char cast to int
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
