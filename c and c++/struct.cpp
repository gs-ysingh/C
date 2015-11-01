#include <iostream>
#include <stdio.h>
using namespace std;

struct employee
{
	int id;
	const char *name;
	const char *city;
};

struct preferences
{
	//bits are decalred to store the data
	bool isAvailable : 1;
	bool isMarried : 1;
	unsigned int numberOfChildren : 4;
};


int main(int argc, char const *argv[])
{
	struct employee yogesh = {1, "Yogesh Singh", "Kanpur"};
	struct employee ep = {2, "Manish Singh", "Kanpur"};
	struct employee *manish = &ep;

	//first way of accessing it:
	printf("%d\n%s\n%s\n", yogesh.id, yogesh.name, yogesh.city);
	
	//Second way of accessing it:
	printf("%d\n%s\n%s\n", manish -> id, manish -> name, manish -> city);

	struct preferences pref;
	pref.isAvailable = true;
	pref.isMarried = false;
	pref.numberOfChildren = 3;

	if(!pref.isMarried) {
		printf("Not Married\n");
	}


	if(pref.isAvailable) {
		printf("Available\n");
	}

	printf("%u\n", pref.numberOfChildren);

	return 0;
}