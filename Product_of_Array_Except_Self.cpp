#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int n, p;
	cin >> n;
	long long a[n], output[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		p = 1;
		for (int j = 0; j < n; j++)
		{
			if (j != i)
			{
				p = p * a[j];

			}

		}
		output[i] = p;
	}
	for (int i = 0; i < n; i++)
	{
		cout << output[i] << " ";
	}


}