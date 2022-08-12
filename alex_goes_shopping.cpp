#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int q;
	cin >> q;
	while (q--)
	{
		int a, k;
		cin >> a >> k;
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (a % arr[i] == 0)
			{
				count++;
			}
		}
		if (count == k)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}



	}
}