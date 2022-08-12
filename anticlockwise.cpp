#include<iostream>
using namespace std;
void clockwise(int n, int m, int a[][10] )
{
	int r = 0, c = 0;
	while (r < n && c < m)
	{
		for (int i = n - 1; i >= c; --i)
		{
			cout << a[r][i] << ", ";
		}
		r++;
		for (int i = r; i < n - 1; ++i)
		{
			cout << a[i][c] << ", ";
		}
		n--;
		if (r < m)
		{
			for (int i = n - 1; i >= c; --i)
			{
				cout << a[m - 1][i] << ", ";
			}
			m--;
		}
		if (c < n)
		{
			for (int i = m - 1; i >= r; --i)
			{
				cout << a[i][c] << ", ";
			}
			c++;
		}
	}
	cout << "END";
}
int main()
{
	int n, m;
	cin >> n >> m;
	int a[10][10];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	clockwise(n, m, a);
}