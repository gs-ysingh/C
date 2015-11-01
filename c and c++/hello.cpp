#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string response;
	cout << "Type a string: " << flush;

	//cin >> response; - cin does not gets entire line, which may contain spaces
	getline(cin, response);

	cout << "The string is " << response << endl; // endl is equal to flush and \n
	return 0;
}