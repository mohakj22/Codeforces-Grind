#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ans = INT_MAX;
    if (k == 4)
    {
        int evens = 0;
        bool isFour = false;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] % 2 == 0)
            {
                evens++;
            }
            if (nums[i] % k == 0)
            {
                isFour = true;
                ans = 0;
                break;
            }
            ans = min(ans, k - nums[i] % k);
        }
        if (!isFour)
        {

            if (evens >= 2)
            {
                ans = min(ans, 0);
            }
            else if (evens == 1)
            {
                ans = min(ans, 1);
            }
            else
            {
                ans = min(ans, 2);
            }
        }
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            nums[i] %= k;
            if (nums[i] == 0)
            {
                ans = 0;
                break;
            }
            ans = min(ans, k - nums[i]);
        }
    }
    cout << "ANS : " << ans << endl;
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}