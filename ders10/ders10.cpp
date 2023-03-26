/*
switch (expression)
{
case constant1:
	group - of - statements - 1;
	break;
case constant2:
	group - of - statements - 2;
	break;
	.
	.
	.
default:
	default - group - of - statements
}

It works in the following way : switch evaluates expression and checks if it is equivalent
to constant1; if it is, it executes group - of - statements - 1 until it finds the break
statement.When it finds this break statement, the program jumps to the end of the entire
switch statement (the closing brace).

If expression was not equal to constant1, it is then checked against constant2.
If it is equal to this, it executes group - of - statements - 2 until a break is found,
when it jumps to the end of the switch.
*/


#include <iostream>

using namespace std;

int main() {
	int x;
	cout << "Give me a number: " << endl;
	cin >> x;
	switch (x) {
	case 1:
		cout << "x is 1. " << endl;
		break;
	case 2:
		cout << "x is 2. " << endl;
		break;
	default:
		cout << "value of x unknown" << endl;
	}




	system("pause");
	return 0;

}