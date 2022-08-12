#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch >= 'A' and ch <= 'Z')
	{
		cout << "U";
	}
	else if (ch >= 'a' and ch <= 'z')
	{
		cout << "L";
	}
	else {
		cout << "l";
	}
	return 0;
}