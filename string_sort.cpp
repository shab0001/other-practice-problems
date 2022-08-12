#include<bits/stdc++.h>
using namespace std;
bool compare(string s, string t)
{
	if (s.find(t) == 0 or t.find(s) == 0)
	{
		return s.length() > t.length();
	}
	else
		return s < t;

}
int main()
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
		cout << x << endl;
	}
}