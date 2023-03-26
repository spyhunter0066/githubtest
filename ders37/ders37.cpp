#include<iostream>
using namespace std;

int main(){

int rows, cols;

cout <<"rows, cols: " << endl;
cin >> rows >> cols;
int **table = new int *[rows];

for (int i=0; i< rows ; i++) {
table[i] = new int [cols];
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

system("pause>0");   
}