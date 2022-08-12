#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, x, sum, o;
	long long  ans;
	cin >> n;
	int a[n], c[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> o;
	while (o--)
	{
		cin >> x;
		for (int i = 0; i < n; i++)
		{
			c[i] = a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if ((i - x)  < 0)
			{
				a[i] = a[i] + c[n + (i - x)];
			}
			else
			{
				a[i] = a[i] + c[i - x];
			}

		}


	}
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	ans = sum % 1000000007;
	cout << ans;


}