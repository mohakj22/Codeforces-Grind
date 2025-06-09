#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve(int n, int totalCols)
{
    if (n == 0)
        return;

    solve(n - 1, totalCols);

    int stars = 2 * n - 1;
    int spaces = (totalCols - stars) / 2;

    for (int i = 0; i < spaces; i++)
        cout << " ";
    for (int i = 0; i < stars; i++)
        cout << "*";
    cout << "\n";
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    int totalCols = 2 * n - 1;

    solve(n, totalCols);

    return 0;
}
