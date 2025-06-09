#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

ll solve(ll n)
{
    if (n == 0 || n == 1)
        return 1;

    return solve(n - 1) * n;
}

int main()
{
    fast_io();
    long long n;
    cin >> n;
    cout << solve(n);

    return 0;
}
