#include <stdio.h>

void callByValue(int x) {
	x = x + 50;
}

void callByReference(int *x) {
	*x = *x + 50;
}

int main(int argc, char const *argv[])
{
	int i = 10;

	callByValue(i); //Since value is passed here, i will be same as previous
	printf("%d\n", i);
	

	callByReference(&i); //Since reference is passed i will be updated in the function
	printf("%d\n", i);

	return 0;
}
