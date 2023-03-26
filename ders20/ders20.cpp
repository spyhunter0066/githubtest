#include <iostream>
using namespace std;
int main() {
	int num1 = 240; //1. sayı
	int num2 = 240; //2. sayı
	int num3 = 240; //3. sayı
	int num4 = 240; //4. sayı

	cout << "num1++ :" << num1++ << endl;
	cout << "++num2 : " << ++num2 << endl;
	cout << "num1-- : " << num3-- << endl;
	cout << "--num4: " << --num4 << endl;

	int num5 = 240; //5. sayı
	cout << "num5: " << num5 << endl; // num5'in ilk değerini yazdıralım
	int y=num5++;
	cout << "updated num5: " << y << endl; // güncel num5'in değerini yazdıralım
	y=num5--;
	cout << "updated num5: " << y << endl; // güncel num5'in değerini yazdıralım

	return 0;
}
