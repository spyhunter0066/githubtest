/*Sometimes, it is just convenient to give
a name to a constant value.
1st way of definition:
//Typed constant expressions
const double pi = 3.14159;
const char newline = '\n';
*/
//Preprocessor definitions(#define)
//2nd way of definition :

#include <iostream>
#define PI 3.14159   // do not require semicolons (;)
#define NEWLINE '\n' 

using namespace std;
int main()
{
	double r = 5.0;               // radius
	double daire;

	daire = 2 * PI * r;
	//Birseyi tanimlamanin degisik bir yolunu gormus olduk.
	cout <<" Yeni yol: "<< daire << NEWLINE << "bitti." << endl;
	system("pause");
	return 0;
}