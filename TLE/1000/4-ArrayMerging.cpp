#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    unordered_map<int, pair<int, int>> freq;

    auto update = [&](const vector<int> &arr, int index)
    {
        int i = 0;
        while (i < n)
        {
            int val = arr[i];
            int j = i;
            while (j < n && arr[j] == val)
                j++;
            int length = j - i;
            if (index == 0)
                freq[val].first = max(freq[val].first, length);
            else
                freq[val].second = max(freq[val].second, length);
            i = j;
        }
    };

    update(a, 0);
    update(b, 1);

    int ans = 0;
    for (auto &[val, p] : freq)
    {
        ans = max(ans, p.first + p.second);
    }

    cout << ans << endl;
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
