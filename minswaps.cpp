#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, min;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < n - 1; i++)
		min = i;
	for (int j = i + 1; j < n; j++)
	{
		if (a[j] < a[min])
		{
			min = j;
		}
		if (i != min)
		{
			swap(a[i], a[min]);
			count++;
		}
	}
	cout << count;
}
