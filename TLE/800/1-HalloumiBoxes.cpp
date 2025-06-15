#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (k > 1)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    fast_io();
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}