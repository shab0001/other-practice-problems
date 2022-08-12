#include<bits/stdc++.h>
using namespace std;
void inverse(int a[], int n)
{
	int inv[n] = {0};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == a[i])
			{
				inv[j] = i;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << inv[i] << " ";
	}
	return;
}
int main()
{
	int n, i, j;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	inverse(a, n);
}