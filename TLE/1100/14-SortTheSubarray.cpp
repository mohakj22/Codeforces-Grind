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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        int l = 0, e = 0;
        int start = 0, end = 0;
        int i = 0;
        while (i < n){
            while(i < n && a[i] == b[i])
                ++i;
            if(i < n){
                l = i + 1;
                while(i < n - 1 && b[i] <= b[i+1]){
                    i++;
                }
                ++i;
                e = i;
                while (l > 0 && b[l] >= b[l - 1])
                {
                    --l;
                }
                if(end - start < e - l){
                    end = e;
                    start = l+1;
                }
            }
        }
        cout << start << " " << end << endl;
    }
    return 0;
}
