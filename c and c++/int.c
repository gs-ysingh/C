#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Size of int: %lu \n", sizeof(int));
	printf("Size of unsigned int: %lu \n", sizeof(unsigned int));
	printf("Size of char: %lu \n", sizeof(char));
	printf("Size of long int: %lu \n", sizeof(long int));
	printf("Size of long long int: %lu \n", sizeof(long long int));

	printf("Size of float: %lu \n", sizeof(float));
	printf("Size of double: %lu \n", sizeof(double));
	printf("Size of long double: %lu \n", sizeof(long double));


	char str[] = "Yogesh";
	printf("sizeof will include null also. so, sizeof of Yogesh is: %lu\n", sizeof(str));

	return 0;
}