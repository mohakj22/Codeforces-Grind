#include <bits/stdc++.h>
using namespace std;
bool isPossible(int x, int book, vector<bool> &setBits)
{
    for (int i = 0; i < 32; ++i)
    {
        bool i_bit_set = (book >> i) & 1;
        if (i_bit_set && !setBits[i])
            return false;
    }
    return true;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    int a = x;
    vector<int> s1(n), s2(n), s3(n);
    for (int i = 0; i < n; ++i)
        cin >> s1[i];
    for (int i = 0; i < n; ++i)
        cin >> s2[i];
    for (int i = 0; i < n; ++i)
        cin >> s3[i];

    // Find the set bits in the x;
    vector<bool> setBits(32);
    for (int i = 0; i < 32; ++i)
    {
        setBits[i] = (a >> i) & 1;
    }
    // now just read the books until the unwanted bit is not set
    int num = 0;
    for (int i = 0; i < n; ++i)
    {
        if (isPossible(x, s1[i], setBits))
        {
            num |= s1[i];
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (isPossible(x, s2[i], setBits))
        {
            num |= s2[i];
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (isPossible(x, s3[i], setBits))
        {
            num |= s3[i];
        }
        else
        {
            break;
        }
    }
    if (num == x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}