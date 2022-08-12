#include<bits/stdc++.h>
using namespace std;
bool compare (string a, string b)
{
	string ab = a + b;
	string ba = b + a;
	if (ab > ba)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s[n];

		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
		}
		sort(s, s + n, compare);
		for (auto x : s)
		{
			cout << x ;
		}
		cout << endl;
	}
}