#include <iostream>
using namespace std;

int & change(int & value) {
	return ++value;
}

//better way to declare, since ref type can be dangerous.
//in this example value cannot be changed
const int & change(const int & value) {
	return value;
}


int main(int argc, char const *argv[])
{
	int i = 10;

	int & j = i; // j is declared as ref type and refering to i

	j = 20; // since j is changed so i will also be changed

	cout << i << endl;

	change(i);

	cout << i << endl;  //since i was passes as ref type, it's updated value is printed
	
	return 0;
}