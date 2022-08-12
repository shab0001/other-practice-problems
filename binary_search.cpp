#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int n, int m)
{
	int f = 0, l = n - 1, flag = 0, mid;
	while (f <= l)
	{
		mid = (f + l) / 2;
		if (a[mid] == m)
		{
			flag = 1;
			break;
		}
		else if (a[mid] > m)
		{
			l = mid - 1;
		}
		else
		{
			f = mid + 1;
		}
	}
	if (flag == 1)
	{
		return mid;
	}
	else
	{
		return -1;
	}
}
int main()
{
	unsigned int n;
	cin >> n;
	signed int a[n], m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	int index;
	index = binarysearch(a, n, m);
	cout << index;
}
