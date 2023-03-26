#include <iostream>
#include <string>
#include <vector>
#include <io.h> 
#include <fcntl.h> 
#include <locale.h>
using namespace std;
int main()
{

    vector<int> myvector(3);
    cout << "Başlangıç değerlerimiz: " << myvector[0] << "  " << myvector[1] << "  " << myvector[2] << "  " << endl;

    for (int i = 0; i < 3; i++)
    {
        myvector[i] = i + 10;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << myvector[i] << endl;
    }
    cout << "Vektörümüzün boyutu: " << myvector.size() << endl;
    cout << "Vektörümüzün ilk elemanı: " << myvector.front() << endl;
    cout << "Vektörümüzün son elemanı: " << myvector.back() << endl;
    cout << "Vektörümüzün 1. elemanı: " << myvector.at(0) << endl;
    cout << "Vektörümüzün 2. elemanı: " << myvector.at(1) << endl;
    cout << "Vektörümüzün 3. elemanı: " << myvector.at(2) << endl;

    return 0;
}
