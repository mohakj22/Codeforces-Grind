#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> cords;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        cords.push_back({x, y});
    }
    if (a <= k && b <= k)
    {
        cout << 0 << endl;
        return;
    }
    ll city_to_major = LONG_LONG_MAX;
    ll major_to_dest = LONG_LONG_MAX;
    ll ans = LONG_LONG_MAX;
    if (a <= k)
        city_to_major = 0;
    ans = min(ans, (abs(cords[a - 1].first - cords[b - 1].first) + abs(cords[a - 1].second - cords[b - 1].second)));
    for (ll i = 0; i < k; ++i)
    {
        if (a - 1 != i)
        {
            city_to_major = min(city_to_major, (abs(cords[a - 1].first - cords[i].first) + abs(cords[a - 1].second - cords[i].second)));
        }
        if (b - 1 != i)
        {

            major_to_dest = min(major_to_dest, (abs(cords[b - 1].first - cords[i].first) + abs(cords[b - 1].second - cords[i].second)));
        }
    }
    if (b <= k)
    {
        cout << min(ans, city_to_major) << endl;
        return;
    }
    if (k <= 0)
    {
        cout << ans << endl;
        return;
    }

    cout << min(ans, (city_to_major + major_to_dest)) << endl;
}
int main()
{
    ll t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        solve();
    }
}