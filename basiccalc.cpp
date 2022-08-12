#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n1, n2, i, flag = 1;
	char ch;
	while (cin >> ch and flag == 1)
	{
		if (ch == '+')
		{
			cin >> n1 >> n2;
			i = n1 + n2;
			cout << i << endl;
		}
		else if (ch == '-')
		{
			cin >> n1 >> n2;
			i = n1 - n2;
			cout << i << endl;
		}
		else if (ch == '*')
		{
			cin >> n1 >> n2;
			cout << n1*n2 << endl;
		}
		else if (ch == '/')
		{
			cin >> n1 >> n2;
			i = n1 / n2;
			cout << i << endl;
		}
		else if (ch == '%')
		{
			cin >> n1 >> n2;
			i = n1 % n2;
			cout << i << endl;
		}

		else if (ch == 'X' or ch == 'x')
		{
			flag = 0;
		}
		else
		{
			cout << "Invalid operation. Try again." << endl;
		}

	}

}