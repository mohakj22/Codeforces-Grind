#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, c;
    cin >> n >> c;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    for (int i = 0; i < n; ++i){
        nums[i] = nums[i] + i + 1;
    }
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        c -= nums[i];
        if(c >= 0){
            ans++;
        }else{
            break;
        }
    }
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}