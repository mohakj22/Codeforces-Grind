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
    int dots = 0;
    string magic;
    string a;
    cin >> a;

    for (int i = 0; i < n; i++)
    {
        char ch = a[i];
        if (ch == '.')
        {
            dots++;
            magic.push_back(ch);
            if (magic.size() == 3)
            {
                cout << 2 << endl;
                return;
            }
        }
        else
        {
            magic.clear();
        }
    }

    cout << dots << endl;
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
