#include<bits/stdc++.h>
using namespace std;
int linearsearch(int a[], int n, int m);
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
	index = linearsearch(a, n, m);
	cout << index;
}
int bsearch(int a[], int n, int m)
{
	int flag = 0, i;
	for (i = 0; i < n; i++)
	{

		if (a[i] == m) {
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag == 1)
	{
		return i;
	}
	else
	{
		return -1;
	}
}