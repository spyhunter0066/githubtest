#include <iostream>
#include <string>
#include <fstream>

//open/read/closeusing namespace std;

using namespace std;

int main() {

    fstream myFile; //open/write/close
    string filename= "data.txt";  //D:\OneDrive - harran.edu.tr\c++\ders32D:\OneDrive - harran.edu.tr\c++\ders32

myFile.open(filename, ios::in); //read  mode. // 1st parameter is the name of your file/ 2nd parameter is the mode you open that file
/*
if(myFile.is_open()){
string line;
while(getline(myFile, line)){ //it stores everyting in a string
cout<<line<<endl;
}}
*/

int id;
string Cname;
double counts;

while(myFile >> id >> Cname >> counts){  //program knows the end of the file
    cout << id <<" " << Cname <<" "  << counts << endl;
}

//myFile.close(); //ifstream knows to close the file automatically



system ("pause>0");
    return 0;
}