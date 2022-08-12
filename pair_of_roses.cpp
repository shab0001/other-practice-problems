#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i, j, m, t, n, f, s, min, diff;
	cin >> t;
	while (t--)
	{
		min = INT_MAX;
		cin >> n;
		long long int a[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cin >> m;

		for ( i = 0; i < n; i++)
		{
			for ( j = 0; j < n - i; j++)
			{
				if (a[j] > a[j + 1])
				{
					a[j] = a[j] ^ a[j + 1];
					a[j + 1] = a[j] ^ a[j + 1];
					a[j] = a[j] ^ a[j + 1];

				}
			}
		}
		// for (i = 0; i < n; i++)
		// {
		// 	cout << a[i] << " ";
		// }
		// cout << endl;

		i = 0;
		j = n - 1;
		while (i < j)
		{

			if (a[i] + a[j] == m)
			{
				diff = abs(a[i] - a[j]);
				if (diff <= min)
				{
					min = diff;
					f = a[i];
					s = a[j];
				}
				i++;
				j--;
			}

			if (a[i] + a[j] > m)
			{
				j--;
			}
			if (a[i] + a[j] < m)
			{
				i++;
			}
		}
		cout << "Deepak should buy roses whose prices are " << f << " and " << s << ".";
		cout << endl;

	}


}