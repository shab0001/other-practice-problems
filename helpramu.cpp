
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, t, m, c1, c2, c3, c4, cor = 0, totalcor, coc = 0, totalcoc, totalfinalcost;
	cin >> t;
	while (t--)
	{
		cin >> c1 >> c2 >> c3 >> c4;
		cin >> n >> m;
		int a[n], b[m];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		for (i = 0; i < n; i++)
		{
			cor = cor + min(a[i] * c1, c2);
		}
		totalcor = min(cor, c3);
		for (i = 0; i < m; i++)
		{
			coc = coc + min(b[i] * c1, c2);
		}
		totalcoc = min(coc, c3);
		totalfinalcost = min((totalcor + totalcoc), c4);
		cout << totalfinalcost << endl;

	}
}
// For the first testcase ,
// The total cost of rickshaws = min( min(2 * 1, 3) + min(5 * 1, 3), 7) = min(5, 7) = 5
// The total cost of cabs = min( min(4 * 1, 3) + min(4 * 1, 3) + min(4 * 1, 3) , 7) = min ( 9, 7) = 7
// Total final cost = min( totalCabCost + totalRickshawCost , c4) = min( 5 + 7, 19) = min ( 12, 19) = 12
// We print 12.