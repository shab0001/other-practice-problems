#include<iostream>
using namespace std;
int main()
{
	int i = 1, j, n, k = -1, v = 1;
	cin >> n;

	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{

			if (j == 1 )
			{
				cout << v << "	";
			}
			j++;
		}

		j = 1;
		k = k + 1;
		while (j <= k - 1)
		{
			cout << "0" << "	";
			j++;
		}
		j = 1;
		while (j <= i)
		{

			if (j == i && j != 1)
			{
				cout << v << "	";
			}
			j++;
		}
		v++;
		cout << endl;
		i++;

	}
}