#include<iostream>
using namespace std;
int main ()
{
	long long int m, r, n, i = -1, j;
	cin >> n;
	m = 0;
	j = n;
	while (j != 0)
	{
		j = j / 10;
		i++;

	}
	while (n != 0 )
	{
		r = n % 10;
		n = n / 10;
		j = 1;
		while (j <= i)
		{
			r = r * 10;
			j++;
		}
		m = m + r;
		i--;
	}
	cout << m;
}
