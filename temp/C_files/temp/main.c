#include "main.h"

/**
 * diff_local_and_static_var - function to demostrate the difference btwn local and
 * static variable
 *
 * Return: void
 */

void diff_local_and_static_var(void)
{
	int local_call_num = 0;
	static int static_call_num = 0;
	char *local_ptr = NULL;
	static char *static_ptr = NULL, *new_ptr;

	printf("\n---%d calls---\n", static_call_num);
	printf("local call number: %d\n", local_call_num);
	printf("static call number: %d\n\n", static_call_num);
	local_call_num += 1;
	static_call_num += 1;

	printf("---local and static varuables are assigned non null value in every call---\n");
	printf("addtess of local pointer: %p\n", (void *)local_ptr);
	printf("address of static variable: %p\n\n", (void *)static_ptr);

	new_ptr = "God is good";
	local_ptr = new_ptr, static_ptr = new_ptr;

}


int main(void)
{
	char c = '3';
	int digit = c - '0'; // or c - 48
	char d = 3 + '0'; // or 3 + 48

	char *token;

	printf("converted character %c to digit: %d\n", c, digit);
	printf("converting number to char %c\n", d);
	c = 2 / 10;
	printf("2 ÷ 10 = %d\n", c);
	c = '7';
	printf("byte value if '7': %d\n", (int)c);
	diff_local_and_static_var();
	diff_local_and_static_var();
	diff_local_and_static_var();

	char s[] = "God;;is;;great";
	digit = 0;
	token = strtok(s, ";");
	printf("main string: %s\n", s);
	printf("first calll to strtok: token: %s\n", token);
	while ((token = strtok(NULL, ";")) != NULL)
	{
		digit++;
		printf("%d subsequent calls: token: %s\n", digit, token);
	}

	return (0);
}
