#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int cur = 0, sum = 0;
		int c1 = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cur += a[i];
			sum += a[i];
			c1 = max(c1, cur);
			if (cur < 0)
			{
				cur = 0;;
			}
		}
		for (int i = 0; i < n; i++)
		{
			a[i] = a[i] * -1;
		}
		int cur1 = 0;
		int c2 = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cur1 += a[i];
			c2 = max(c2, cur1);
			if (cur1 < 0)
			{
				cur1 = 0;
			}
		}
		int c3 = sum - (-1 * c2);
		cout << max(c1, c3) << endl;
	}
	return 0;
}
