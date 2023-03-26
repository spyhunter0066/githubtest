/*
Member Functions in Classes:
There are 2 ways to define a member function:
Inside class definition / Outside class definition
To define a member function outside the class definition we have to 
use the scope resolution :: operator along with class name and function name.

A non-member function always appears outside of a class.
The member function can appear outside of the class body (for instance, in the implementation file).
But, when you do this, the member function must be qualified by the name of its class. 
This is to identify that that function is a member of a particular class. 
void Geeks::printname(...){}
*/





// C++ program to demonstrate function
// declaration outside class
 
#include <iostream>
using namespace std;
class Geeks
{
    public:
    string geekname;
    int id;
     
    // printname is not defined inside class definition
    void printname();
     
    // printid is defined inside class definition
    void printid() //Note that all the member functions defined inside the class definition are by default inline.
    {
        cout << "Geek id is: " << id;
    }
};
 
// Definition of printname using scope resolution operator ::
void Geeks::printname()
{
    cout << "Geekname is: " << geekname;
}

int main() {
     
    Geeks obj1;
    obj1.geekname = "xyz";
    obj1.id=15;
     
    // call printname()
    obj1.printname();
    cout << endl;
     
    // call printid()
    obj1.printid();
    return 0;
}