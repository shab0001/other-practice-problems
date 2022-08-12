#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, step = 0;
		cin >> n;
		while (n > 0)
		{
			int p = 1;
			while (p <= n)
			{
				p *= 2;
			}

			p /= 2;
			n = n - p;
			step++;

		}
		cout << step << endl;
	}
}