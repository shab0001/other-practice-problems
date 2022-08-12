#include<bits/stdc++.h>
#define size 100000
using namespace std;
int main()
{
	int n, i, j, t;
	cin >> t;
	while (t--)
	{
		flag = 0;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 1)
			{
				flag++;
			}
			else if (a[i] == 0)
			{
				flag--;
			}
			if (flag < 0)
			{
				break;
			}
		}

		if (flag > 0)
		{
			cout << "Valid" << endl;
		}
		else
		{
			cout << "Invalid" << endl;
		}




	}
}