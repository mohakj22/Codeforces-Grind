#include <bits/stdc++.h>
using namespace std;

#define ll long long

void readMatrix(vector<vector<int>> &mat, int r, int c, int i = 0, int j = 0)
{
    if (i == r)
        return;
    if (j == c)
        readMatrix(mat, r, c, i + 1, 0);
    else
    {
        int val;
        cin >> val;
        mat[i][j] = val;
        readMatrix(mat, r, c, i, j + 1);
    }
}

void addMatrix(vector<vector<int>> &a, vector<vector<int>> &b, vector<vector<int>> &res, int r, int c, int i = 0, int j = 0)
{
    if (i == r)
        return;
    if (j == c)
        addMatrix(a, b, res, r, c, i + 1, 0);
    else
    {
        res[i][j] = a[i][j] + b[i][j];
        addMatrix(a, b, res, r, c, i, j + 1);
    }
}

void printMatrix(vector<vector<int>> &mat, int r, int c, int i = 0, int j = 0)
{
    if (i == r)
        return;
    if (j == c)
    {
        cout << "\n";
        printMatrix(mat, r, c, i + 1, 0);
    }
    else
    {
        cout << mat[i][j] << " ";
        printMatrix(mat, r, c, i, j + 1);
    }
}

void solve()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> A(r, vector<int>(c));
    vector<vector<int>> B(r, vector<int>(c));
    vector<vector<int>> res(r, vector<int>(c));

    readMatrix(A, r, c);
    readMatrix(B, r, c);
    addMatrix(A, B, res, r, c);
    printMatrix(res, r, c);
}

int main()
{
    solve();
    return 0;
}
