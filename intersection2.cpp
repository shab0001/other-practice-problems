#include<iostream>
using namespace std;
int main()
{
    int n, i, j, count = 0;
    cin >> n;
    int a[n], b[n], c[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << "[";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {

                c[count] = a[i];
                a[i] = 0;
                b[j] = 0;
                count++;
                //cout<<b[j]<<", ";
                break;
            }
        }
    }
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                swap(c[j], c[j + 1]);
            }
        }
    }
    for (i = 0; i < count; i++)
    {
        cout << c[i];
        if (i == count - 1)
        {break;}
        cout << ", ";
    }
    cout << "]";
    return 0;
}