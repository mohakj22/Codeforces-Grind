#include <bits/stdc++.h>
using namespace std;
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    string s;
    cin >> s;
    int len = s.length();
    int zeroes = 0, ones = 0;
    for (int i = 0; i < len; ++i)
    {
        if (s[i] == '0')
            zeroes++;
        else
            ones++;
    }
    int j = 0;
    while (zeroes > 0 || ones > 0)
    {
        if (s[j] == '0'){
            if(ones <= 0){
                break;
            }else{
                ones--;
            }
        }
        else{
            if(zeroes <= 0){
                break;
            }else{
                zeroes--;
            }
        }
        j++;
    }
    cout << len - j << endl;
    
}

int main()
{
    fast_io();
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}