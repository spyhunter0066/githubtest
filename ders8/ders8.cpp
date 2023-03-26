// my first string
#include <iostream>
#include <string> //add this new header
/* An example of compound type is the string class. Variables of this type are
able to store sequences of characters, 
such as words or sentences. */
using namespace std;

int main()
{
	string mystring1 ="string1";
	string mystring2( "string2");
	string mystring3{ "string3" };	

	cout << mystring1 <<"\t"<< mystring2 <<"\t"<<""<< mystring3 << endl;
	system("pause");
	return 0;
}