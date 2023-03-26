
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   
fstream myFile; //open/close/read/write
myFile.open("dosya.txt", ios::in); //read  mode. // 1st parameter is the name of your file/ 2nd parameter is the mode you open that file
if(myFile.is_open()){
string line;
while(getline(myFile, line)){ //it stores everyting in a string
cout<<line<<endl;
}
myFile.close(); 
}

system ("pause>0");
    return 0;
}