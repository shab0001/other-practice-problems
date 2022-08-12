#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				a[j] = a[j] ^ a[j + 1];
				a[j + 1] = a[j] ^ a[j + 1];
				a[j] = a[j] ^ a[j + 1];

			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int h = j + 1; h < n; h++)
			{
				if (a[i] + a[j] + a[h] == m)
				{
					cout << a[i] << ", " << a[j] << " and " << a[h] << endl;
				}
			}
		}
	}


}
