#include "main.h"


char *rev_str(char *s)
{
	int start = 0, end;
	char temp;

	if (!s)
		return (NULL);


	while (s[end] != '\0')
		end++;
	end--;
	printf("end %d\n", end);

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
	return (s);
}
