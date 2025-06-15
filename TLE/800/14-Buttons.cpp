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

    int a, b, c;
    cin >> a >> b >> c;
    int AnnaChance = a + ceil((double)c / 2);
    int KatieChance = b + floor((double)c / 2);
    // cout << AnnaChance << " " << KatieChance << endl;
    if (AnnaChance == KatieChance || AnnaChance < KatieChance)
    {
        cout << "Second\n";
    }
    else {
        cout << "First\n";
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