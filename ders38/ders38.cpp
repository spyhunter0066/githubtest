#include<iostream>
using namespace std;

int main(){

int numbers[5]={1,2,3,4,5};
cout << numbers << endl;       //the name of an array is the address of a 1st element of an array
cout << &numbers[0] << endl;   //& operator shows the address of an array's element
cout << numbers[2] << endl;    //accessing an element of an array with [] operator
cout << *(numbers+2) << endl;  //dereferenced pointer


int rows, cols;

cout <<"rows, cols: " << endl;
cin >> rows >> cols;
int **table = new int *[rows];

for (int i=0; i< rows ; i++) {
table[i] = new int [cols];
cout << *table[i] << endl;
}

for (int i=0; i< rows ; i++) {
for (int j=0; j< cols ; j++) {

table[i][j]= i+j;

cout << "i: " << i << " j: " << j << "  table[" <<i<< "][" << j <<"]: "<<  table[i][j] << endl;

}}

for (int i=0; i< rows ; i++) {

delete[]table[i];
}

delete[]table;

table= NULL;


}