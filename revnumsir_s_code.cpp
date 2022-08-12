#include <iostream>
using namespace std;
int main()
{
	int n, rev = 0;
	cin >> n;
	while (n > 0)
	{
		int d = n % 10;
		n = n / 10;
		rev = rev * 10 + d;
	}
	cout << rev;

}