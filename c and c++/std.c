#include <stdio.h>

int main(int argc, char const *argv[])
{
	fprintf(stdout, "1 "); //fprintf will take stream where to print
	fprintf(stderr, "2 "); //stderr is standard error stream

	//This line is printed first since stdout is buffered
	//stdout is cleared at the end of program
	//stderr will print immediately

	return 0;
}