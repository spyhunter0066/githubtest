/* break loop example
break leaves a loop, even if the condition for its end is not fulfilled.It can be used to end an infinite loop, or to force it to end before its natural end.For example, 
let's stop the countdown before its natural end: */
#include <iostream>
using namespace std;

int main()
{
	for (int n = 10; n > 0; n--)
	{
		cout << n << ", ";
		if (n == 3)
		{
			cout << "countdown aborted!\n";
			break;
		}
	}

	for (int n = 10; n > 0; n--) {
		if (n == 5) continue;
		cout << n << ", ";
	}
	cout << "\t 5 is skipped, but still it lifts-off!\n";
	//Aþaðýdaki ifade bir nevi baþka bir for loop yapma þeklidir.
	int x = 10;
    ReturningPoint: //: is the identifier for returning point.
	cout << x << ", ";
	x--;
	if (x > 0) goto ReturningPoint;
	cout << "liftoff!\n";

/*
It works in the following way: switch evaluates expression 
and checks if it is equivalent to constant1; if it is,
it executes group-of-statements-1 until it finds the 
break statement. When it finds this break statement,
the program jumps to the end of the entire switch statement
(the closing brace).
*/
	
	char grade ;
	cout << "Please, put your grade: " << endl;
	cin >> grade;
	switch (grade) {
	case 'A':
		cout << "Excellent!" << endl;
		break;
	case 'B':
	case 'C':
		cout << "Well done!" << endl;
		break;
	case 'D':
		cout << "You passed!" << endl;
		break;
	case 'F':
		cout << "Better try again" << endl;
		break;
	default:
		cout << "Invalid grade" << endl;
	}
	cout << "Your grade is " << grade << endl;

	system("pause");

	return 0;

}
