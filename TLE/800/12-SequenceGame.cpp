/*
Basically the key thing is that don't try on to find out the exact array, rather just try to guess it.

Now when you try to guess it you will find a pattern that if, nums[i] < nums[i-1] then we can simply push it back again because during the formation of array 'b' it will be vanished up as it is going to be compared with the nums[i-1] which is greater that it, but nums[i] will not be vanished as it will be compared with the pushed element and this is exactly equal to nums[i].
*/
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

template <typename T>
void coutArr(vector<T> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
            cout << arr[i] << " ";
        else
            cout << arr[i] << endl;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> nums;
    cinArr(nums, n);
    vector<int> ans;
    ans.push_back(nums[0]);
    for (int i = 1; i < n; i++)
    {
        if(nums[i] < nums[i-1]){
            ans.emplace_back(nums[i]);
        }
        ans.emplace_back(nums[i]);
    }
    cout << ans.size() << endl;
    coutArr(ans);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}