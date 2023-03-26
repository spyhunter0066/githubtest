
#include<iostream>
using namespace std;

int main() {
	int a = 3, b = 2;
	cout << "a =" << a << "  b= " << b << " unutmayalimki, her satirda nesnenin degeri guncellenmektedir." << endl;
	a += b;
	cout << "a=a+b= " << a << endl;
	a -= b;
	cout << "a=a-b= " << a << endl;
	a *= b;
	cout << "a=a*b= " << a << endl;
	a /= b;
	cout << "a=a/b= " << a << endl;
	system("pause");
	return 0;
}