#include<iostream>
using namespace std;
int main ()
{
	int n1, n2, p, lcm;
	cin >> n1 >> n2;
	p = n1 * n2;
	for (int i = 1; i <= p; i++)
	{
		if (i % n1 == 0 and i % n2 == 0)
		{
			lcm = i;
			break;
		}
	}
	cout << lcm;

}