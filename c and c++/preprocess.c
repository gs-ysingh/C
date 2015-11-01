//1. file inclusion
//2. Macros - for substitution


#include <stdio.h>

#define ONE 1 //It's just a text substitution
#define MAX(a, b) (a > b ? a : b)

#define SWAP(a, b)  do {    	 \
						a ^= b;  \ 
						b ^= a;  \
						a ^= b;  \  
					} while (0)

const int i = 10;//But, if declare the const variable, we can hold in pointer, it will
//added in symbol table

int main(int argc, char const *argv[])
{
	printf("%d\n", ONE);
	const int *a = &i;

	printf("%d\n", *a);

	printf("Max between 1 and 2 is : %d\n", MAX(1, 2));

	int i = 1;
	int j = 2;
	SWAP(i , j);
	printf("%d\n%d\n", i , j);

	return 0;
}
