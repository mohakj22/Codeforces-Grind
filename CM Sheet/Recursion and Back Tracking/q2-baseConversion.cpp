#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve(int n, string &ans)
{
    if (n == 0)
    {
        return;
    }
    if (n == 1)
    {
        ans.push_back('1');
        return;
    }
    solve(n / 2, ans);
    ans.push_back(n % 2 + '0');
}

int main()
{
    fast_io();
    long long t;
    cin >> t;
    string ans = "";
    solve(t, ans);
    cout << ans << endl;
    return 0;
}