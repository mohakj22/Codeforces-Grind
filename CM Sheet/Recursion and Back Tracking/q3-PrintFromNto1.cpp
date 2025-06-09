#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve(int n)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        cout << n;
        return;
    }
    cout << n << " ";
    solve(n - 1);
}

int main()
{
    fast_io();
    long long t;
    cin >> t;
    solve(t);
    return 0;
}