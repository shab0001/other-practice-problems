#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (97 <= int(a) && int(a) <= 122)
	{
		cout << "L";

	}
	else if (65 <= int(a) && int(a) <= 90)
	{
		cout << "U";

	}
	else
	{
		cout << "I";
	}

}