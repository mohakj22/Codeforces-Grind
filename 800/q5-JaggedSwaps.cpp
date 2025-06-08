#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[0] != 1)
        cout << "NO\n";
    else
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
