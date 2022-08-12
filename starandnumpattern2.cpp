#include<iostream>
using namespace std;
int main()
{
	int i = 1, j, n, k;
	cin >> n;
	k = n;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			cout << j;
			j++;
		}
		j = 1;
		while (j < k)
		{
			cout << "*";
			j++;
		}

		i++;
		k--;
		cout << endl;
	}
}