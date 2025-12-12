#include <stdio.h>


char eg(char *s)
{
	char end;

	while (*(s + 1) != '\0')
		s++;
	end = *s;

	return (end);
}

int main(void)
{
	char *s = "good";
	char b;

	b = eg(s);
	printf("%c\n", b);

	return (0);
}
