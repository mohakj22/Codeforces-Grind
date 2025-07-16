#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<vector<long long>> arrays;
    for (long long i = 0; i < n; ++i)
    {
        long long k;
        cin >> k;
        vector<long long> temp;
        for (long long j = 0; j < k; ++j)
        {
            long long num;
            cin >> num;
            temp.push_back(num);
        }
        arrays.push_back(temp);
    }
    // ye vo value hai jo sabhi array ke jitne bhi second max hai unki minimum
    long long minOfMax = INT_MAX;
    // min toh globally chahiye
    long long mini = INT_MAX;
    long long ans = 0;
    // Need to take out the first two mins out of each array
    for (long long i = 0; i < n; ++i)
    {
        long long maxi = INT_MIN;
        long long firstMin = INT_MAX, secondMin = INT_MAX;
        for (long long j : arrays[i])
        {
            if (j < firstMin)
            {
                secondMin = firstMin;
                firstMin = j;
            }
            else if (j < secondMin)
            {
                secondMin = j;
            }
            mini = min(mini, j);
        }
        maxi = max(maxi, secondMin);
        ans += maxi;
        minOfMax = min(minOfMax, maxi);
    }
    ans = ans - minOfMax + mini;
    cout << ans << endl;
}
int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}