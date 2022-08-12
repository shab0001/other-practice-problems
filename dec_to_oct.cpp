#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	int o, d, d1, dec, rev = 0;
	cin >> o;
	dec = 0;
	while (o > 0)
	{
		d = o % 8;
		o = o / 8;
		dec = dec * 10 + d;
		if (o < 8)
		{
			dec = dec * 10 + o;
			break;
		}

	}
	while (dec > 0)
	{
		int d1 = dec % 10;
		dec = dec / 10;
		rev = rev * 10 + d1;
	}
	cout << rev;
}