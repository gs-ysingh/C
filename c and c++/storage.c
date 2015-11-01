#include <stdio.h>
#include "external.h"

extern void printName();
extern int val;

int main(int argc, char const *argv[])
{
	int i;

	for(i = 0; i < 5; i++) {
		int j = 10; // it's using auto storage and each time it's clearning value

		printf("%d\n", ++j);
	}


	for(i = 0; i < 5; i++) {
		static int j = 10; // It will use the same storage for variable 

		printf("%d\n", ++j);
	}	


	for(i = 0; i < 5; i++) {
		register int j = 10; // Similar to auto, but it's faster to access

		printf("%d\n", ++j);
	}

	printName();

	printf("\n%d\n", val);

	return 0;
}
