#include <bits/stdc++.h>
using namespace std;
template <typename T>
bool cinArr(vector<T> &arr, int n, int &maxi)
{
    arr.resize(n);
    unordered_set<T> st;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        st.insert(arr[i]);
        maxi = max(maxi, arr[i]);
    }
    if (st.size() < 2)
    {
        cout << -1 << endl;
        return false;
    }
    return true;
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
    int maxi = INT_MIN;
    bool moveForward = cinArr(nums, n, maxi);
    if (moveForward)
    {

        vector<int> b, c;
        for(int i : nums){
            if(i != maxi){
                b.emplace_back(i);
            }
            else {
                c.emplace_back(maxi);
            }
        }
        cout << b.size() << " " << c.size() << endl;
        coutArr(b);
        coutArr(c);
    }
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