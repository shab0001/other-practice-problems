#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n, i, j, v, c;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		v = 1;
		for (j = 1; j <= i; j++)
		{
			cout << v << " ";
			v++;

		}
		for (int l = i + 1; l <= 2 * n - i - 1; l++)
		{
			cout << "  ";
		}
		if (v == n + 1)
		{
			v--;
		}
		v--;
		for (j = 1; j <= i and v != 0; j++)
		{
			cout << v << " ";
			v--;
		}
		cout << endl;
	}

}
