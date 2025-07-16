#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> visits(n);
    for (ll i = 0; i < n; ++i)
        cin >> visits[i];

    vector<vector<ll>> temp;
    for (ll i = 0; i < n; ++i)
    {
        temp.push_back({i + 1, visits[i]});
    }

    // Sort by visits[i] in descending order
    sort(temp.begin(), temp.end(), [](const vector<ll> &a, const vector<ll> &b)
         { return a[1] > b[1]; });

    vector<ll> ans(n + 1);
    ll x = 1, neg_x = -1;
    ll totalTime = 0, step = 0;
    ans[0] = 0;
    for (auto i : temp)
    {
        if (step % 2)
        {
            ans[i[0]] = neg_x;
            totalTime += i[1] * 2 * abs(neg_x);
            neg_x--;
        }
        else
        {
            ans[i[0]] = x;
            totalTime += i[1] * 2 * abs(x);
            x++;
        }
        step++;
    }

    cout << totalTime << endl;
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
