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

template <typename T>
void cinMatrix(vector<vector<T>> &mat, int m, int n)
{
    mat.resize(m);
    for (int i = 0; i < m; i++)
    {
        mat[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
}
int score(int r, int c, int r1, int c2){
    int minDistanceFromBorder = min({r, c, r1, c2});
    return minDistanceFromBorder + 1;
}
void solve()
{
    vector<vector<char>> board;
    cinMatrix(board, 10, 10);
    int ans = 0;
    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            char a = board[row][col];
            if (a != '.')
            {
                // This is not a good way because if the nuber of rows and cols increases then we just can't hardcode the things.
                // Need to look for some dynamic approach
                // if (row == 0 || col == 0 || row == 9 || col == 9)
                //     ans += 1;
                // else if (row == 1 || col == 1 || row == 8 || col == 8)
                //     ans += 2;
                // else if (row == 2 || col == 2 || row == 7 || col == 7)
                //     ans += 3;
                // else if (row == 3 || col == 3 || row == 6 || col == 6)
                //     ans += 4;
                // else if (row == 4 || col == 4 || row == 5 || col == 5)
                //     ans += 5;

                // The main idea for dynamic approach would be to calculate the minimum distance of a cell from the border.
                ans += score(row, col, 10 - row - 1, 10 - col - 1);
            }
        }
    }
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
