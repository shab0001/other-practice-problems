#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> m >> n;
		int i = 1;
		while (m > 0 and n > 0)
		{
			if (i % 2 != 0)
			{
				m -= i;
			}
			else
			{
				n -= i;
			}
			if (m > 0 and n <= 0)
			{
				cout << "Aayush" << endl;
			}
			else if (n > 0 and m <= 0)
			{
				cout << "Harshit" << endl;
			}
			i++;
		}

	}
}