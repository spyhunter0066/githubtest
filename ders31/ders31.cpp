#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string filename;
    cout << "Now, enter your file name with an extantion!\n" <<endl;
    cin >> filename;
    ofstream file(filename);
    file << "hello\n";
if(file.is_open()) {
    cout<<"OK" << endl;
}
vector<string> names;
names.push_back("ilker");
names.push_back("ning");
names.push_back("aydın");

for(string name : names){

file <<name<< endl;

}

    file.close();
    return 0;

}