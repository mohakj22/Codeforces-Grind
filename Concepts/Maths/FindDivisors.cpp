#include <bits/stdc++.h>
using namespace std;
vector<long long> findDivisors(long long n)
{
    vector<long long> divisors;
    for (long long i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            divisors.emplace_back(i);
            if (n / i != i)
            {
                divisors.emplace_back(n / i);
            }
        }
    }
    for (auto i : divisors)
        cout << i << " ";
    cout << endl;
    return divisors;
}
int main()
{
    long long n;
    cin >> n;
    findDivisors(n);
}