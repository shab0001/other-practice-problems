#include<iostream>
using namespace std;
int main()
{
	int i, j, n, h, g, f;
	cin >> n;
	g = (n + 1) / 2;
	f = g - 1;
	h = 1;
	for (i = 1; i <= (n + 1) / 2 ; i++)
	{
		for (j = 1; j <= g; j++)
		{
			cout << "*" << "	";
		}
		for (j = 1; j <= h; j++)
		{
			if (i != 1)
				cout << " " << "	";
		}
		for (j = f; j >= 1; j--)
		{
			cout << "*" << "	";
		}
		if (i != 1)
		{
			h = h + 2;
			f--;
		}
		g--;
		cout << endl;
	}
	h = h - 4;
	g = g + 2;;
	f = f + 2;
	for (i = ((n + 1) / 2) + 1; i <= n ; i++)
	{
		for (j = 1; j <= g; j++)
		{
			cout << "*" << "	";
		}
		for (j = 1; j <= h; j++)
		{
			if (i != n)
				cout << " " << "	";
		}
		for (j = f; j >= 1; j--)
		{
			cout << "*" << "	";
		}

		g++;
		h = h - 2;
		if (i != n - 1)
		{
			f++;
		}
		if (i != n)
		{
			cout << endl;
		}

	}
}
