#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int x;
	cin >> x;
	int x1 = x;
	int newnum = 0, p = 0, l;
	while (x1 > 0)
	{
		l = x1 % 10;
		if (l > (9 - l) and x1 != 9)
		{
			l = 9 - l;
		}
		newnum = newnum + l * pow(10, p);
		x1 = x1 / 10;
		p++;
	}
	if (newnum <= x) {
		cout << newnum << endl;
	}
	else
	{
		cout << x << endl;
	}
}