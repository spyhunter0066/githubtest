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
	while (str != "goodbye"); /* yukarýdaki "do" ifadesi en azýndan
	bir kere çalýþmak zorundadýr, çünkü onu doðrulayacak "while" 
	ifadesi sonda yer almaktadýr. Program sanki önce while kýsmý 
	okunarak, eðer þart saðlýyorsa "do" kýsmý 2. kez devam edilerek gider.
	Eðer, "while" kýsmý çýkarsa, "do" kýsmý sonsuza kadar çalýþýr ve 
	ne zaman duracaðýný bilemez.
	
	Even if the user wants to end the loop as soon as possible by
	entering goodbye, the block in the loop needs to be executed
	at least once to prompt for input, and the condition can, 
	in fact, only be determined after it is executed.
	*/
	return 0;
}







