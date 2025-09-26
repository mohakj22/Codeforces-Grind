#include <bits/stdc++.h>
using namespace std;

void findFactors(set<long long> &factors, long long num, long long k)
{
    for (long long i = 1; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
        {
            if (i <= k)
                factors.insert(i);
            if (num / i != i && num / i <= k)
                factors.insert(num / i);
        }
    }
}

void solve()
{
    long long a, b, k;
    cin >> a >> b >> k;
    if (a == b || (k > a && k > b))
    {
        cout << 1 << endl;
        return;
    }
    set<long long> fa, fb;
    findFactors(fa, a, k);
    findFactors(fb, b, k);

    vector<long long> intersection;
    set_intersection(fa.begin(), fa.end(), fb.begin(), fb.end(), back_inserter(intersection));
    sort(intersection.begin(), intersection.end());
    int GCD = intersection.back();

    long long ans = 2;
    if (a / GCD <= k && b / GCD <= k)
        ans = 1;
    // for (long long factor : intersection)
    // {
    //     if ((a / factor <= k && b / factor <= k))
    //     {
    //         ans = 1;
    //         break;
    //     }
    // }

    cout << ans << endl;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
