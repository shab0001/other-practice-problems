#include<iostream>
using namespace std;
int main() {
	int n, i = 1, j, v, count = 0 , count2 = 0;
	cin >> n;
	while (i <= n)
	{
		j = 1;
		while (j <= 3)
		{

			cin >> v;
			count = count + v;
			j++;

		}
		if (count >= 2)
		{
			count2 = count2 + 1;
		}
		i++;
		count = 0;
	}
	cout << count2;
}

