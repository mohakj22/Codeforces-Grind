#include <bits/stdc++.h>
using namespace std;
long long findMsb(long long n)
{
    long long MSB = 0;
    long long setBits = 0;
    while (n)
    {
        MSB++;
        if (n % 2 == 1)
            setBits++;
        n /= 2;
    }
    if(setBits == 1)
        return MSB - 1;
        else
            return MSB;
}
void solve()
{
    long long n;
    cin >> n;
    // Goal -> Find the nearest 2's power to the n.
    // How?
    // ANS : Find the MSB in the n.
    long long MSB = findMsb(n);
    // cout << "MSB -> " << MSB << endl;
    long long breakPoint = n > 0 ? (long long)pow(2, MSB - 1) : 0;
    for (long long i = 1; i < breakPoint; i++)
        cout << i << " ";
    cout << 0 << " ";
    for (long long i = breakPoint; i < n; ++i)
        cout << i << " ";

    cout << endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}