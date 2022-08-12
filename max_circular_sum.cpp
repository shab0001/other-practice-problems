#include<bits/stdc++.h>
using namespace std;
int kadane(int*a, int n)
{
	int max_so_far = INT_MIN;
	int cursum = 0;
	for (int i = 0; i < n; i++)
	{
		cursum += a[i];
		if (cursum > max_so_far)
		{
			max_so_far = cursum;
		}
		if (cursum < 0)
		{
			cursum = 0;
		}
	}
	return max_so_far;
}
int max_circular(int *a, int n)
{
	int max_kadane = kadane(a, n);
	if (max_kadane < 0)
	{
		return max_kadane;
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		a[i] = -a[i];
	}
	sum = sum + kadane(a, n);
	int maxsum = max(sum, max_kadane);
	return maxsum;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << max_circular(a, n) << endl;;
	}
	return 0;
}