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
	int n = 10; // for loop'un aksine baþlangýç
	//parametresi dýþarýda tanýmlanýr.
	while (n > 0) { //for loop'un ikinci parametresi verilir.
		cout << n << endl;
		--n; //for loop'un artýþ azalýþ kýsmý, en sonda belirtilir.
	}

	cout << "lift off!\n";
	system("pause");
	return 0;

}