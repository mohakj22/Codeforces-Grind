#include <bits/stdc++.h>
using namespace std;
#define ll long long
template <typename T>
void cinArr(vector<T> &arr, ll n)
{
    arr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
ll summation(vector<ll> &v, ll index)
{
    if(index >= v.size()){
        return 0;
    }
    return v[index] + summation(v, index + 1);
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> nums;
    cinArr(nums, n);
    cout << summation(nums, 0) << endl;
}
int main()
{

    solve();
}