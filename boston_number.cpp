#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	int newn = n;
	int digitsum = 0;
	while (newn > 0)
	{

		digitsum += newn % 10;
		newn /= 10;
	}
	int primesum = 0;
	while (n % 2 == 0)
	{
		primesum += 2;
		n = n / 2;
	}
	int flag = 1;
	for (int i = 3; n > 1; i++)
	{
		while (n % i == 0)
		{

			primesum += i;
			n = n / i;
		}

	}
	if (digitsum == primesum)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}

}