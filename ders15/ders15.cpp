#include <iostream>
using namespace std;


double add(double a, double b)
{
	double r;
	r = a + b;
	return r;
}
double deduce(double a, double b)
{
	double r;
	r = a - b;
	return r;

}

double multiply(double a, double b)
{
	double r;
	r = a * b;
	return r;

}
double divide(double a, double b)
{
	int r;
	r = a / b;
	return r;

}

int main()
{
	double a= 8., b = 4. ;
	cout << add(a, b)  << "\t" <<
		deduce(a, b)   << "\t" <<
		multiply(a, b) << "\t" <<
		divide(a, b)   << "\t" << endl;

		cout << "EOP" << endl;
	system("pause");

	return 0;

}