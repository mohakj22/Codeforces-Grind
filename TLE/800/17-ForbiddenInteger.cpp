/*
Nice question, forced to think a little bit.

The key is that if the number is even and x & k are not 1 then any number could be printed very easily, but if the number is odd then the number could be written in the form of 2a + 1, now see the thing is that if we look at wrt to x and k then we will notice that if 1 is not forbidden then the number can be printed very easily, but if 1 is forbidden then in this can we will move as follows

2a + 1 now because 1 is forbidden so what will do is take one from a and add it to 1 -> 2 * ((a-1)+1) + 1

2 (a-1) + 3 now if 3 is not forbidden and is <= k then we have got the answer already,

need to print 2, a-1 times and then use 3 this will make our number.

But in case if 3 or basically the rem exceeds the k then we will again go to the state where we can't get a solution.
*/

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
    int n, k, x;
    cin >> n >> k >> x;
    // cout << n << k << x << endl;
    if (x == 1 && k == 1)
    {
        // cout << "Inpossible case\n";
        cout << "NO\n";
        return;
    }

    if (n % 2 == 0)
    {
        // cout << "Even case\n";
        cout << "YES\n";
        if (x == 1)
        {
            // cout << "1 is forbidden\n";
            int f = n / 2;
            cout << f << endl;
            while (f--)
            {
                cout << 2 << " ";
            }
        }
        else
        {
            // cout << "2 is forbidden\n";

            cout << n << endl;
            while (n--)
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        // cout << "odd case\n";

        int a = n / 2;
        int extra = n - 2 * a;
        if (x != 2)
        {
            // cout << "2 is not forbidden\n";
            while (a != 0 && extra <= k)
            {
                if (extra != x)
                {

                    break;
                }
                else
                {
                    a--;
                    extra += 2;
                }
            }
            if (extra > k)
            {
                cout << "NO\n";
                return;
            }
            cout << "YES\n";
            cout << a + 1 << endl;
            while (a--)
            {
                cout << 2 << " ";
            }
            cout << extra << endl;
        }
        else
        {
            // cout << "1 is not forbidden\n";
            cout << "YES\n";
            cout << n << endl;
            while (n--)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    // int k = 1;
    while (t--)
    {
        // cout << "new testcase started " << k++ << endl;

        solve();
        // cout << endl;
    }
}