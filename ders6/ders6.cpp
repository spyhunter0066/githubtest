// assignment operator
#include <iostream>
using namespace std;

int main()
{
	int a=0, b=0;         // a:?,  b:?
	cout << "İnitial values: a: " << a << " b: " << b << endl;
	a = 10;           // a:10, b:?
	cout << "a: " << a << " b: " << b << endl;
	b = 4;            // a:10, b:4
	cout << "a: " << a << " b: " << b << endl;
	a = b;            // a:4,  b:4
	cout << "a: " << a << " b: " << b << endl;
	b = 7;            // a:4,  b:7
	cout << "a: " << a << " b: " << b << endl;

	system("pause");

	return 0;
}