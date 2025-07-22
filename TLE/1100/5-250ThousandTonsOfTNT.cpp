#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<long long> findDivisors(long long n)
{
    vector<long long> divisors;
    for (long long i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            divisors.emplace_back(i);
            if (n / i != i)
            {
                divisors.emplace_back(n / i);
            }
        }
    }
    return divisors;
}
void solve()
{
    ll n;
    cin >> n;
    vector<long long> divisors = findDivisors(n);
    vector<ll> nums(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    ll ans = LONG_LONG_MIN;
    for (ll i : divisors)
    {
        ll mini = LONG_LONG_MAX;
        ll maxi = LONG_LONG_MIN;

        ll j = 0;
        while (j < n)
        {
            ll k = 0;
            ll temp = 0;
            while (k < i)
            {
                temp += nums[j];
                j++;
                k++;
            }
            mini = min(mini, temp);
            maxi = max(maxi, temp);
        }
        ans = max(maxi - mini, ans);
    }
    cout << ans << endl;
}
int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}