#include<iostream>
using namespace std;
int main ()
{
	int n, i, h, flag = 1;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	i = 0;
	while (i < n)
	{
		if (a[i] > a[i + 1])
		{
			i++;

		}
		else
		{
			h = i;
			break;
		}
	}
	while (h < n)	{
		if (a[h] < a[h + 1])
		{
			h++;
		}
		else
		{
			flag = 0;
			break;

		}
	}
	if (flag == 1)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

}
