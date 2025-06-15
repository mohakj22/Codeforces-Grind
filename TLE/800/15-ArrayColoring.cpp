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
    int o = 0, e = 0;
    for (int i : nums)
    {
        if (i % 2)
        {
            o++;
        }
        else
        {
            e++;
        }
    }
    if ((o % 2 != 0))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    cout << endl;
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