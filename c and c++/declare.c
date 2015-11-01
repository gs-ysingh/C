#include <stdio.h>


int i; //variable definition has to be done before
void fun();

int main(int argc, char const *argv[])
{
	printf("\nvariable or function declaration has to be before block");
	fun();
	printf("\n%d\n", i);
	return 0;
}

i = 12; //variable declaration can be done after

void fun() {
	printf("\nvariable or function definition can be after the block");
}