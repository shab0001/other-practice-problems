#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, dec, d, d1, bin, rev = 0;
	cin >> n;
	while (n > 0)
	{	rev = 0;
		cin >> dec;
		bin = 0;
		while (dec > 0)
		{
			d = dec % 2;
			dec = dec / 2;
			bin = bin * 10 + d;
			if (dec < 2)
			{
				bin = bin * 10 + dec;
				break;
			}

		}
		while (bin > 0)
		{
			int d1 = bin % 10;
			bin = bin / 10;
			rev = rev * 10 + d1;
		}
		int count = 0;
		while (rev > 0)
		{
			int bit = rev % 2;
			rev = rev / 10;
			if (bit == 1)
			{
				count++;
			}
		}
		cout << count << endl;
		n--;
	}
}