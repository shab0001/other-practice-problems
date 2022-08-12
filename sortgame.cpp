#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	map<string, int>m;
	string s;
	int sal;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		cin >> sal;
		m.insert({s, sal});
	}
	map<string, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	return 0;
}