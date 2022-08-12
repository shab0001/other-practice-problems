#include<bits/stdc++.h>
using namespace std;
void convert(int sb, int db, int sn)
{
	int dn = 0, p = 0, l;
	while (sn > 0)
	{
		l = sn % 10;
		dn = dn + l * pow(sb, p);
		sn = sn / 10;
		p++;
	}

	int rn = 0;
	p = 0;
	while (dn >= 1)
	{
		l = dn % db;
		rn = rn + l * pow(10, p);
		dn = dn / db;
		p++;

	}
	cout << rn << endl;
}
int main()
{
	int sb, db;
	long long int sn;
	cin >> sb >> db >> sn;
	convert(sb, db, sn);
}