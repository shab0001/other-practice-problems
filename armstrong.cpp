#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, count = 0, d, a = 0, c, n1;
	cin >> n;
	c = n;
	n1 = n;
	while (c > 0)
	{
		d = c % 10;
		c = c / 10;
		count++;
	}
	while (n > 0)
	{
		d = n % 10;
		n = n / 10;
		a = a + pow(d, count);
	}
	if (n1 == a)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
}