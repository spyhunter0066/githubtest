//Let's first pass a single array element to a function.

#include <iostream>
void display(int a)
{
    std::cout << a << std::endl;
}
float average(float a[])
{
    int i;
    float avg, sum=0;
    for(i=0;i<8;++i)
    {
        sum+= a[i];
    }
    avg = sum/8;
    return avg;
}

int main(){

    int n[ ] = { 20, 30, 23, 4, 5, 2, 41, 8 };
    display(n[2]);
    
//Passing an entire Array in a Function. Function will not take an array, but its address.
/*
 We can also pass a whole array to a function by passing the array name as argument. Yes, the trick is that we will pass the address of array, that is the address of the first element of the array. Thus, by having the pointer of the first element, we can get the entire array
 */

    float b, m[ ] = { 20.6, 30.8, 5.1, 67.2, 23, 2.9, 4, 8 };
    b = average(m); //first element of the array is entered as argument
    std:: cout << "Average of numbers = " << b << std::endl;
    return 0;
}
