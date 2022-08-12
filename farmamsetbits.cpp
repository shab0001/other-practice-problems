#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    while (n > 0)
    {
        cin >> a;
        int digit = 0;
        int count = 0;
        while (a > 0)
        {
            digit = a % 2;
            a = a / 2;

            if (digit == 0)
                count++;

        }
        cout << count;
        cout << endl;
        n--;
    }
}