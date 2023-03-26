/*

The do-while loop
A very similar loop is the do-while loop, whose syntax is:

do statement while (condition);

It behaves like a while-loop, except that condition is evaluated
after the execution of statement instead of before, guaranteeing
at least one execution of statement, even if condition is never 
fulfilled. For example, the following example program echoes any
text the user introduces until the user enters goodbye:

*/

// echo machine
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	do {
		cout << "Enter text: ";
		getline(cin, str); //cin ile girilen string metnini getline ile al demek.
		cout << "You entered: " << str << '\n';
	} 
	while (str != "goodbye"); /* yukar�daki "do" ifadesi en az�ndan
	bir kere �al��mak zorundad�r, ��nk� onu do�rulayacak "while" 
	ifadesi sonda yer almaktad�r. Program sanki �nce while k�sm� 
	okunarak, e�er �art sa�l�yorsa "do" k�sm� 2. kez devam edilerek gider.
	E�er, "while" k�sm� ��karsa, "do" k�sm� sonsuza kadar �al���r ve 
	ne zaman duraca��n� bilemez.
	
	Even if the user wants to end the loop as soon as possible by
	entering goodbye, the block in the loop needs to be executed
	at least once to prompt for input, and the condition can, 
	in fact, only be determined after it is executed.
	*/
	return 0;
}







