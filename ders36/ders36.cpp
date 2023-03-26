#include <iostream>

 using namespace std;

int main(){

 int size ;
 cout <<"size: " ;
 cin >> size;
 int *myArray = new int[size]; // my Array is a pointer.
 //NEW word allocated an array of an integer with size we specified. 
 // the first element of this array is stored in myArray pointer.
// pointer can store an array.
 for(int i =0; i < size; i++){
     cout << "Array[" <<i << "]: ";  cin >> myArray[i];  
 }

 for(int i =0; i < size; i++){
//cout << myArray[i] << endl; 
cout << *(myArray+i) << " " ; //the name of the array is the address of 1st element of an array. 
//De_reference of an array gives the value.
 }

delete[]myArray; //we deleted the array, but we still point to a memory 
myArray= NULL; // we stopped pointing any location in memory

system("pause>0");
}