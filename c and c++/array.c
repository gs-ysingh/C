#include <stdio.h>

int main(int argc, char const *argv[])
{

	int a[] = {1, 2, 3};
	int *i = a;

	while(*i) {
		printf("%d\n", *(i++));
	}

	//String is declared as array of char
	char s[] = "Yogesh Singh";
	
	char *p = s;

	while(*p) {
		printf("%c\n", *(p++));
	}

	char *q = "Manish Singh";

	while(*q) {
		printf("%c\n", *(q++));
	}	


	return 0;
}
