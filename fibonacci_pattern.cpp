#include<iostream>
using namespace std;
int main()
{
	int a, b, c, i, j, n;
	cin >> n;
	a = 0;
	b = 1;
	c = a + b;
	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			if (i == 1 && j == 1)
			{
				cout << a ;
			}
			else if (i == 2 && j == 2)
			{
				cout << b << "	";
			}
			else
			{
				cout << c << "	";
				a = b;
				b = c;
				c = a + b;
			}

			j++;
		}
		cout << endl;
		i++;
	}


}