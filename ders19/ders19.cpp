#include <iostream>
using namespace std;
int main() {
	int num1 = 40;
	int num2 = 2;
	cout << "number1= " << num1 <<"  number2= " << num2<< endl;
	num2 = num1;
	cout << "= Output: " << num2 << endl;
	num2 += num1;
	cout << "+= Output: " << num2 << endl;
	num2 -= num1;
	cout << "-= Output: " << num2 << endl;
	num2 *= num1;
	cout << "*= Output: " << num2 << endl;
	num2 /= num1;
	cout << "/= Output: " << num2 << endl;
	num2 %= num1;
	cout << "%= Output: " << num2 << endl;
	
	return 0;
}