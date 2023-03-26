/* Statements and flow control: 
1) Selection statements: if and else:  if (condition) statement1 else statement2
2)The while loop:  while (expression) statement
3)The do-while loop:  do statement while (condition);
4)The for loop: for (initialization; condition; increase) statement;
5)The continue statement: it means skip this line.
6)Another selection statement : switch.
*/

// custom countdown using while
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 10, x;

	while (n > 0) {
		cout << n << "!";
		//system("pause");
		--n;
	}

	cout << "now lift off!\n";
	system("pause");
	for (int m = 10; m > 0; m--) {
		cout << m << "! ";
	}
	cout << "lift off!\n";
	system("pause");

	for (int n = 10; n > 0; n--) {
		if (n == 5) continue;
		cout << n << "! ";
	}
	cout << "liftoff! 5 is dismissed.\n";
	system("pause");
//////////////////////////////////////////////////////
	cout << " Please, enter a number: " << endl;  cin >> x;
	if (x > 0)
		cout << "this is positive." << endl;
	else if (x < 0)
		cout << "this is negative." << endl;
	else
		cout << "this is 0."<<endl;
	system("pause");
////////////////////////////////////////////////////////
/* The do-while loop is usually preferred over a while-loop when the statement 
needs to be executed at least once. */
	string str;
	do {
		cout << "Enter text: ";
		cout << "Cikmak icin bye yaz."<<endl;
		getline(cin, str);
		cout << "You entered: " << str << '\n';
	} while (str != "bye");

	system("pause");

	
	return 0;




}