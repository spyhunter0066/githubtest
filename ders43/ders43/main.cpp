//We can also pass an array to a function using pointers.
#include <iostream>

using namespace std;

void display(int *p)
{
    int i;
    for(i=0;i<8;++i)
    {
        cout << "n[" << i << "] = " << *p << endl;
        p++;
    }
}

int main(){
    int n[ ] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    display(n); // the name of an array is the address of ana array, too.
    return 0;
}
