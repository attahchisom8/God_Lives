#include "main.h"


/**
 * check_leap_year - function to check if the given year is a leap year
 * @year: the given year
 *
 * Return: true if leap year, else false
 */

bool check_leap_year(int year)
{
	if (!year)
		return (false);

	if (!(year % 4) && (year % 100))
	{
		return (true);
	}

	if (!(year % 4) && !(year % 100))
	{
		if (!(year % 400))
			return (true);
	}

	return (false);
}


int main(void)
{
	int year;

	for (year = 1991; year <= 2300; year++)
	{
		if (check_leap_year(year))
			printf("year %d is a leap year\n", year);
	}

	return (0);
}
