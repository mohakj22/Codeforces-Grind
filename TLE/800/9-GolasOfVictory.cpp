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
    int n;
    cin >> n;
    vector<int> nums;
    cinArr(nums, n-1);
    int ans = 0;
    for (int i : nums)
    {
        ans -= i;
    }
    cout << ans << endl;
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