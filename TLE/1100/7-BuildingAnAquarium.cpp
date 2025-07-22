#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPossible(vector<ll> heights, ll height, ll limit)
{
    ll req = 0;
    for (ll h : heights)
    {
        if (h < height)
            req += (height - h);
        if (req > limit)
            return false;
    }
    return true;
}

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> heights(n);
    for (int i = 0; i < n; ++i)
        cin >> heights[i];

    ll maxHeight = *max_element(heights.begin(), heights.end());
    ll s = 0, e = maxHeight + x;
    ll ans = 0;

    while (s <= e)
    {
        ll mid = s + (e - s) / 2;
        if (isPossible(heights, mid, x))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
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
}
