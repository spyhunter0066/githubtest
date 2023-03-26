// factorial calculator
#include <iostream>
using namespace std;

signed long int factorial(signed long int  a)
{
	if (a > 1)
		return (a * factorial(a - 1));
	else if (a==1)
		return 1;
	else cout<< "sayiniz negatiftir" <<endl;
	exit (1);
}

int main()
{
	 
	signed long int number;
	cout << "Lutfen faktoriyel hesabi icin bir sayi giriniz!" << endl;
	cin >> number;
	cout << number << "! = " << factorial(number);
	return 0;
}