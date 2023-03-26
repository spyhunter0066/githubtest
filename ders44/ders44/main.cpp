/*
 For-each loop
 There is a new form of for loop which makes iterating over arrays easier. It is called for-each loop. It is used to iterate over an array. Let's see an example of this.
 */

#include <iostream>

int main()
{
    using namespace std;
    int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int m : ar)
    {
        cout << m << endl;
    }
    return 0;
}
/*
 This is very simple. Here, the variable m will go to every element of the array ar and will take its value.
 */
