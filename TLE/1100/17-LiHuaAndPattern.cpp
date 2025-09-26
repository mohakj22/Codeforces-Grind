#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    int k;
    cin >> n >> k;
    
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> grid[i][j];
        }
    }
    if (n == 1)
    {
        cout << "Yes\n";
        return;
    }
    int rs = 0, cs = 0;
    int re = n - 1, ce = re;
    while (rs <= re)
    {
        cs = 0, ce = n - 1;
        while (cs < n && ce >= 0)
        {
            if (grid[rs][cs] == grid[re][ce])
            {
                cs++;
                ce--;
            }
            else if (k > 0)
            {
                if (rs == re)
                    grid[rs][ce] = !grid[rs][ce];
                k--;
                cs++;
                ce--;
            }
            else
            {
                cout << "No\n";
                return;
            }
        }
        rs++;
        re--;
    }
    if(n % 2 == 1){
        cout << "Yes\n";
    }else{
        if(k % 2 == 0){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}