#include <iostream>
#include <vector>

using namespace std;

int main(void) {
   cout<<"vector initialization:"<<endl;
   cout << "Type 0 to stop!\n";

   vector<int> myvector ;//= {10, 20, 30, 40, 50}; // değerlerini atayıp, vektör boyutunu belirlemiş olduk.

  // myvector.pop_back();//3 elemanı vektörden atılıyor.

  int myint;
  do {
    cin >> myint;
    if (myint==0) continue;
    myvector.push_back(myint);
  } while (myint!=0);
     cout <<"before pop_back()"<<endl;
    for (int i = 0; i < myvector.size(); ++i){cout << "vector elements:" << myvector[i] << endl;}
     myvector.pop_back();//son elemanı vektörden atılıyor.
     cout <<"after pop_back()"<<endl;
    for (int i = 0; i < myvector.size(); ++i){cout << "vector elements:" << myvector[i] << endl;}



   return 0;
}
