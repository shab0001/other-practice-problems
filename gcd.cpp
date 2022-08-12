#include<iostream>
using namespace std;
int main() {
	int n1, n2, l, gcd;
	cin >> n1 >> n2;
	if (n1 > n2)
	{
		l = n1;
	}
	else
	{
		l = n2;
	}
	for (int i = l - 1; i > 0; i--)
	{
		if (n1 % i == 0 and n2 % i == 0)
		{
			gcd = i;
			break;
		}
	}
	cout << gcd;
	return 0;
}