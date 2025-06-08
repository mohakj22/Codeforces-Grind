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
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    if (mp.size() > 2)
    {
        cout << "NO\n";
        return;
    }

    if (mp.size() == 1)
    {
        cout << "YES\n";
        return;
    }

    auto it = mp.begin();
    int freq1 = it->second;
    it++;
    int freq2 = it->second;

    if (abs(freq1 - freq2) > 1)
        cout << "NO\n";
    else
        cout << "YES\n";
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
