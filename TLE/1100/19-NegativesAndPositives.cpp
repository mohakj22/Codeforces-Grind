#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (long long i = 0; i < n; ++i)
        cin >> nums[i];

    bool isZero = 0;
    long long lessThanZeroes = 0;
    long long mini = INT_MAX;
    for (long long i = 0; i < n; ++i)
    {
        if (nums[i] == 0)
            isZero = 1;
        if (nums[i] < 0)
        {
            lessThanZeroes++;
        }
        mini = min(abs(nums[i]), mini);
    }
    long long ans = 0;
    if (isZero || lessThanZeroes % 2 == 0)
    {
        for (long long i : nums)
            ans += abs(i);
        cout << ans << endl;
        return;
    }
    else
    {
        for (long long i : nums)
            ans += abs(i);
        cout << ans - 2 * mini << endl;
        return;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}