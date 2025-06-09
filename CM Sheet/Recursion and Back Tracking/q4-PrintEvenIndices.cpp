#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve(vector<int> &v, int i)
{
    if (i >= v.size() - 1)
    {
        if (i % 2 == 0)
        {
            // cout << i << endl;
            cout << v[i] << " ";
        }
        return;
    }
    solve(v, i + 1);
    if (i % 2 == 0)
    {
        // cout << i << endl;
        if (i != 0)
            cout << v[i] << " ";
        else
            cout << v[i];
    }
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    solve(v, 0);

    return 0;
}
