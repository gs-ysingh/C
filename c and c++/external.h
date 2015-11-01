#include <stdio.h>

//standard way of defining a external header file
//if this file refering a.h and main file also refering a.h then code 
//will be included multile times causing the error in variable and function
//So, to avoid it check if the variable exists

#ifndef EXTERNAL_A
	#define EXTERNAL_A
	//code starts here
	
	int val;

	void printName() {
		val = 10;
		printf("\nMy Name is Yogesh Singh");

		
	}

#endif

