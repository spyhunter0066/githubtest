#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   
fstream myFile; //open/write/close
myFile.open("dosya.txt", ios::out); //write_output mode. // 1st parameter is the name of your file/ 2nd parameter is the mode you open that file
if(myFile.is_open()){
myFile<<"Hello\n"; // << is the redirection signs
myFile<<"This is my 1st line" << endl;
myFile.close(); 
}

 //open/append/close
myFile.open("dosya.txt", ios::app);//everytime you use this output mode, you overwrite the previous
if(myFile.is_open()){
myFile<<"Hello2\n"; // << is the redirection signs
myFile.close(); 
}

//open/read/close
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
