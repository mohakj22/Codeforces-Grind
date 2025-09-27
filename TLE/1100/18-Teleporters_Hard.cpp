#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    int c;
    cin >> n >> c;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        a[i] = nums[i] + i + 1;
        b[n - i - 1] = nums[n - i - 1] + i + 1;
    }
    int mini = INT_MAX;
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= mini)
        {
            mini = a[i];
            if (index != -1)
            {
                if (b[index] < b[i])
                {
                    index = i;
                }
            }else
                index = i;
        }
    }
    vector<int> t1, t2;
    int i = 0;
    while (i < n && a[i] <= b[i])
    {
        if (i != index)
        {
            t1.push_back(a[i]);
        }
        i++;
    }
    while (i < n)
    {
        if (i != index)
        {
            t2.push_back(b[i]);
        }
        i++;
    }
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    int j = 0, k = 0;
    int ans = 0;
    while (j < t1.size() && k < t2.size())
    {
        if (t1[j] < t2[k])
        {
            c -= t1[j++];
        }
        else
        {
            c -= t2[k++];
        }
        if (c >= 0)
            ans++;
        else
        {
            break;
        }
    }
    if (c >= 0)
    {
        while (j < t1.size())
        {
            c -= t1[j++];
            if (c >= 0)
                ans++;
            else
            {
                break;
            }
        }
        while (k < t2.size())
        {
            c -= t2[k++];
            if (c >= 0)
                ans++;
            else
            {
                break;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}