#include <bits/stdc++.h>
using namespace std;
template <typename T>
void cinArr(vector<T> &arr, long long n)
{
    arr.resize(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void solve()
{
    long long n;
    cin >> n;
    vector<long long> nums;
    cinArr(nums, n);
    long long mini = LONG_LONG_MAX;
    for (long long i = 0; i < n - 1; ++i){
        mini = min(mini, nums[i + 1] - nums[i]);
    }
    if(mini < 0){
        cout << 0 << endl;
    }
    else{
        cout << (int)(floor((double)mini / 2)) + 1 << endl;
    }
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