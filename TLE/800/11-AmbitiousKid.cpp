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
    cinArr(nums, n);
    int ans = INT_MAX;
    for (int i : nums)
    {
        ans = min(ans, abs(i));
    }
    cout << ans << endl;
}
int main()
{
    solve();
}