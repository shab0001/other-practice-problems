#include<bits/stdc++.h>
#define size 100000
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int f[size] = {0};
	// for (auto x : a)
	// {
	// 	f[x]++;
	// }
	for (int i = 0; i < n; i++)
	{
		f[a[i]]++;
	}
	for (int i = 0; i < size; i++)
	{
		if (f[i] > 0)
		{
			while (f[i] > 0)
			{
				cout << i << " ";
				f[i]--;
			}
		}
	}


}