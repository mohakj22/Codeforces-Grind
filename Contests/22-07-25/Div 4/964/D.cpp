#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s, t;
    cin >> s >> t;
    if(t.length() > s.length()){
        cout << "No" << endl;
        return;
    }
    int i = 0, j = 0;
    while(i < s.length() && j < t.length()){
        if(s[i] == t[j]){
            i++;
            j++;
        }else if(s[i] != t[j] && s[i] != '?'){
            i++;
        }else if(s[i] == '?'){
            s[i] = t[j];
            i++;
            j++;
        }
    }
    if(j == t.length()){
        while(i < s.length()){
            if(s[i] == '?'){
                s[i] = 'a';
            }
            i++;
        }
        cout << "Yes" << endl;
        cout << s << endl;
    }else{
        cout << "No" << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}