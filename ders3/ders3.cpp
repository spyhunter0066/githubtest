/* Initialization of variables
When the variables in the example above are declared, 
they have an undetermined value until they are assigned a value
for the first time.But it is possible for a variable to have a 
specific value from the moment it is declared.This is called the 
initialization of the variable.
In C++, there are three ways to initialize variables:They are all equivalent.
1)	c-like initialization : type identifier = initial_value; int x = 0;
2)  constructor initialization: int x (0);
3)  uniform initialization:  int x {0}; 
*/
// initialization of variables

#include <iostream>
using namespace std;

int main()
{
	int a = 5;             // initial value: 5
	int b(3);              // initial value: 3
	int c{2};              // initial value: 2
	int cevap;            // initial value undetermined
	/* int foo = 0;
     auto bar = foo;     // the same as: int bar = foo;
	 decltype(foo) bar;  // the same as: int bar; 
	  */
	a = a + c;
	cevap = a+b+c;
	cout << "Cevap: " << cevap << endl;
	//system("pause");

	return 0;
}