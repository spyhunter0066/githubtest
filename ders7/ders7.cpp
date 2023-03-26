//output/input (cout/cin)
/*
Extractions on cin can also be chained to request more than one 
datum in a single statement:
cin >> a >> b;

*/
#include <iostream>
using namespace std;

int main()
{
	int i;
	cout << "Please enter an integer value: ";
	cin >> i;
	cout << "The value you entered is " << i;
	cout << " and its double is " << i * 2 << ".\n";
	
	system("pause");
	return 0;
}