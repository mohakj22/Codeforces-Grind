#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
        cout << "Second\n";
    else
        cout << "First\n";
}

int main()
{
    fast_io();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
