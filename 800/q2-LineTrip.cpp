#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    int n, x;
    vector<int> nums;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.emplace_back(a);
    }
    int ans = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            ans = max(ans, nums[i + 1] - nums[i]);
        }
        else
        {
            ans = max(ans, 2 * (x - nums[i]));
        }
    }
    cout << ans << endl;
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