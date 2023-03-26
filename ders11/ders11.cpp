/* while (expression) statement

The while - loop simply repeats statement while expression
is true.If, after any execution of statement, expression is
no longer true, the loop ends, and the program continues r
ight after the loop.For example, let's have a look at a
countdown using a while-loop:

custom countdown using while */

#include <iostream>
using namespace std;

int main()
{
	int n = 10; // for loop'un aksine ba�lang��
	//parametresi d��ar�da tan�mlan�r.
	while (n > 0) { //for loop'un ikinci parametresi verilir.
		cout << n << endl;
		--n; //for loop'un art�� azal�� k�sm�, en sonda belirtilir.
	}

	cout << "lift off!\n";
	system("pause");
	return 0;

}