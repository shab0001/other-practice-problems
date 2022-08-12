#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c, d, r1, r2;
	cin >> a >> b >> c;
	d = (b * b) - 4 * a * c;
	r1 = (-b + sqrt(d)) / 2 * a;
	r2 = (-b - sqrt(d)) / 2 * a;
	if ((r1 > 0 or r2 > 0) and r1 == r2)
	{
		cout << "Real and Equal" << endl;
		cout << r1 << " " << r2;
	}
	else if ((r1 > 0 or r2 > 0) and r1 != r2)
	{
		cout << "Real and Distinct" << endl;
		if (r1 < r2)
		{
			cout << r1 << " " << r2;
		}
		else
		{
			cout << r2 << " " << r1;
		}
	}
	else if (d < 0)
	{
		cout << "Imaginary" << endl;
	}
}