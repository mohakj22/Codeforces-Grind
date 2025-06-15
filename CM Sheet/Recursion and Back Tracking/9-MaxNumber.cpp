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
int findMax(vector<int> &v, int index)
{
    if (index >= v.size())
        return INT_MIN;
    return max(v[index], findMax(v, index + 1));
}
void solve()
{
    int n;
    cin >> n;
    vector<int> nums;
    cinArr(nums, n);
    cout << findMax(nums, 0) << endl;
}
int main()
{
    
    
        solve();
    
}