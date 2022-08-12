#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	i = 0;
	j = n - 1;
	while (i <= j)
	{
		int t;
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}