#include <iostream>
int main(){

    int n[4] = { 20, 30, 5, 67 }; /* declaring n as an array of 4 integers */
      int *p; /*a pointer*/
      int i;
      p = n; /*p is pointing to array n*/
      /* printing the address of array */
    std::cout << "Address of array n = " << p << " which is same as the address of the first element of the array n. " << &n[0] << std::endl; /*p points to array means store address of first element of array*/
      /* printing the addresses of elements of array */
      for (i = 0; i < 4; i++ )
      {
            std::cout << "Address of n[" << i << "] = " << &n[i] << std::endl;
      }
    for (i = 0; i < 4; i++ )
    {
          std::cout << "Value of n[" << i << "] = " << *(p+i) << std::endl;
    }
    
    return 0;
}
