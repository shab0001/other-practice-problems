#include<bits/stdc++.h>

using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n], flag = 0, prefix[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		prefix[0] = a[0];
		for (int i = 1; i < n; i++)
		{
			prefix[i] = prefix[i - 1] + a[i];
		}
		int maximum = *max_element(prefix, prefix + n);
		int minimum = *min_element(prefix, prefix + n);
		int f[maximum - minimum + 1] = {0};
		for (int i = 0; i < n; i++)
		{
			f[prefix[i] - minimum]++;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i] + a[j] == 0)
				{
					flag = 1;
				}
			}
		}
		if (flag == 0)
		{



			for (int i = 0; i < maximum - minimum + 1; i++)
			{	if (f[i] > 0)
				{
					if (f[i] > 1)
					{
						flag = 1;
					}
				}
			}
		}
		if (flag == 1 or f[0] != 0)
			cout << "Yes" << endl;

		else
			cout << "No" << endl;
	}
}
