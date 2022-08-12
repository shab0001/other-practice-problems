#include<iostream>
using namespace std;
int main ()
{
	int f1, f2, i, x, c;
	cin >> f1 >> f2 >> x;
	for (i = f1; i <= f2; i = i + x) {

		c = (5 * (i - 32)) / 9;
		cout << i << "	" << c << endl;
	}

}