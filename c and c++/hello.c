#include <stdio.h>
enum
{
	max_length = 127
};

static char response[max_length];

int main(int argc, char const *argv[])
{
	printf("Type a string: ");
	fflush(stdout);
	fgets(response, max_length, stdin);
	printf("the string is %s\n", response);
	return 0;
}