#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	int b, d, count, dec;
	cin >> b;
	dec = 0;
	count = -1;
	while (b > 0)
	{
		d = b % 2;
		b = b / 10;
		count = count + 1;
		d = d * pow(2, count);
		dec = dec + d;

	}
	cout << dec;
}