#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        long long totalSum = 0;
        for (int i = 0; i < n; i++)
            totalSum += a[i];

        long long minSum = LLONG_MAX;
        for (int i = 0; i <= k; i++)
        {
            long long removeSum = 0;
            for (int j = 0; j < k - i; j++)
            {
                removeSum += a[2 * j] + a[2 * j + 1];
            }
            for (int j = 0; j < i; j++)
            {
                removeSum += a[n - 1 - j];
            }
            minSum = min(minSum, removeSum);
        }
        cout << totalSum - minSum << '\n';
    }
    return 0;
}
