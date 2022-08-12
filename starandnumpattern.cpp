#include<iostream>
using namespace std;
int main()
{
	int i = 1, j, n, v, k = -1;
	cin >> n;
	while (i <= n)
	{
		v = 1;
		j = 1;
		while (j <= (n + 1) - i)
		{
			cout << v << " ";
			v++;
			j++;

		}
		k = k + 2;
		i++;
		j = 1;
		while (j <= k - 2)
		{
			cout << "*" << " ";
			j++;
		}
		cout << endl;

	}
}