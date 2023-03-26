//My first program in C++
//Topic: Compilers and the structure of a program.
//Lines beginning with a hash sign (#) are directives read and
//interpreted by what is known as the preprocessor. 
#include <iostream>
//#include <process>
/*If you have seen C++ code before, you may have seen cout being used
instead of std::cout. Both name the same object: the first one uses
its unqualified name (cout), while the second qualifies it directly
within the namespace std (as std::cout). cout is part of the standard
library, and all the elements in the standard C++ library are declared
within what is called a namespace: the namespace std. In order to refer
to the elements in the std namespace, a program shall either qualify
each and every use of elements of the library (as we have done by
prefixing cout with std::), or introduce visibility of
its components. The most typical way to introduce visibility of these
components is by means of using declarations like below. */
using namespace std;
/*This line below initiates the declaration of a function. Essentially,
a function is a group of code statements which are given a name: in this case,
this gives the name "main" to the group of code statements that follow. */
int main()
{
	//	std::cout << "Hello world!" << std::endl;
	cout << "Hello world!" << endl;
	//system("pause");
	return 0;
}
