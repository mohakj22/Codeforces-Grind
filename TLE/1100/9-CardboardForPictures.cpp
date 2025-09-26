#include <bits/stdc++.h>
using namespace std;
long long isValid(vector<long long>&sides, long long w, long long c){
    long long sum = 0;
    for(long long i : sides){
        sum = sum +(long long)pow((i + 2 * w), 2);
        if(sum > c)
            return sum;
    }
    return sum;
}
void solve(){
    long long n, c;
    cin >> n >> c;
    vector<long long> sides(n);
    for (long long i = 0; i < n; ++i)
        cin >> sides[i];

    long long e = (long long)ceil(sqrt(c));
    long long s = 0;
    long long ans = 0;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if(isValid(sides, mid, c) == c){
            ans = mid;
            break;
        }
        else if (isValid(sides, mid, c) > c){
            e = mid - 1;
        }else
            s = mid + 1;
    }
    cout << "ANS : " << ans << endl;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
}

/*
🔒 Note: Why Avoid pow() in Competitive Programming (especially for squaring)
Problem:
Using pow(x, 2) with integers in C++ can cause unexpected wrong answers when x is large.

Reason:

pow() is a floating-point function (double pow(double, double)), not meant for precise integer math.

When you do pow((i + 2 * w), 2), it converts everything to double.

Squaring large integers like 1e9 gives results like 1e18, which may lose precision or round off.

This leads to wrong comparisons like if(sum == c) failing even when mathematically correct.

Example of failure:

cpp
Copy
Edit
pow(1000000000, 2) = 1e18 → might be 999999999999999936 (wrong by 64)
Solution:
👉 Always use integer multiplication for squaring:

cpp
Copy
Edit
(x) * (x)   // Always prefer this
Extra Tip:
Avoid all floating-point math (double, float, pow, sqrt, etc.) in binary search or precision-critical code unless absolutely necessary.

*/