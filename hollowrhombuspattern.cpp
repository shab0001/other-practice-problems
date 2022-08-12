#include<iostream>
using namespace std;
int main()
{
	int i = 1, j, n;
	cin >> n;
	while (i <= n)
	{
		j = 1;
		while (j <= (n - i))
		{
			cout << " ";
			j++;
		}
		if (i == 1 or i == n)
		{
			j = 1;
			while (j <= n)
			{
				cout << "*";
				j++;

			}
		}
		else
		{
			j = 1;
			while (j <= n)
			{
				if (j == 1 or j == n)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				j++;
			}
		}
		i++;
		cout << endl;

	}


}

