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
    solve(n / 10);
    int digit = n % 10;
    cout << digit << " ";
}

int main()
{
    fast_io();
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n == 0){
            cout << n << endl;
            continue;
        }
        solve(n);
        cout << endl;
    }

    return 0;
}