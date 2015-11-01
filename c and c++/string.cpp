#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string str = "Yogesh Singh";
	//string is class in c++, once we create instance, we can use different function
	//of string class
	cout << "Size of string: " << sizeof(str) << endl; 
	cout << "length of string: " << str.length() << endl; //in c use strlen for length 
	for (string::iterator i = str.begin(); i != str.end(); ++i)
	{
		cout<< *i;
	}
	return 0;
}