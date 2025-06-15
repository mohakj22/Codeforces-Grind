#include <bits/stdc++.h>
using namespace std;
template <typename T>
void cinArr(vector<T> &arr, int n)
{
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    cinArr(nums, n);
    for (int i : nums)
    {
        if (i == k)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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