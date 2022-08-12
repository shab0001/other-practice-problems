#include<iostream>
using namespace std;
int main ()
{
	int n1, n2, n, t;
	cin >> n1 >> n2;
	n = 1;
	while (n <= 1000 and n1 > 0)
	{
		t = 3 * n + 2;
		if (t % n2 != 0)
		{
			cout << t << endl;
			n1--;
		}
		n++;
	}

}
