#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int>inter;
    int f[100000] = {0};
    int f1[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        f[a[i]]++;
        f1[b[i]]++;
    }
    for (int i = 0; i < 100000; i++)
    {
        if (f[i] > 0 and f1[i] > 0)
        {
            if (f[i] < f1[i])
            {
                while (f[i] > 0)
                {
                    inter.push_back(i);
                    f[i] -= 1;
                }
            }
            else
            {
                while (f1[i] > 0)
                {
                    inter.push_back(i);
                    f1[i] -= 1;
                }
            }
        }
    }
    cout << "[";
    for (int i = 0; i < inter.size(); i++)
    {
        cout << inter[i];
        if (i == inter.size() - 1) {
            break;
        }
        cout << ", ";
    }
    cout << "]";
}
