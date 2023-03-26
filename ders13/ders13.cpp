#include <iostream>
using namespace std;

int main()
{

	int n, i;

	for (n = 0, i = 100; n != i; ++n, --i){
		cout << n << "   "  << i << endl;
	}

	cout << "ok!" << endl;
	system("pause");
	return 0;
}