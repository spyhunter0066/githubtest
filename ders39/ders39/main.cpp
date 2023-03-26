//
//  main.cpp
//  ders39
//
//  Created by ilker Can Çelik on 4.11.2022.
//

#include <iostream>
using namespace std;
int passValue(int value) // value is a copy of the argument
{
    return value;
}

void passArray(int *ptr) // prime is the actual array
{
   for (int i=0; i< 5; i++){
   cout<< "array[" << i << "]:  " << *ptr << endl;
   ptr++;}
}

int main()
{
    int value=3 ;
    int prime[5]={1,2,3,4,5};
    passValue(value);
    passArray(prime);
    std::cout << "after passValue: " << value << '\n';
    std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';

    return 0;
}
