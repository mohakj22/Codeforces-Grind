#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll w, h;
    cin >> w >> h;

    ll ans = 0;

    for (int i = 0; i < 4; i++)
    {
        ll k, s, e, x;
        cin >> k;

        cin >> s; 
        for (int j = 1; j < k - 1; j++)
            cin >> x; 
        cin >> e;     

        ll base = e - s;
        if (i < 2)
            ans = max(ans, base * h);
        else
            ans = max(ans, base * w); 
    }

    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
