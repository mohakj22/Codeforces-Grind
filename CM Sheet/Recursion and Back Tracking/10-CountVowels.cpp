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
int countVowels(string &s, int index)
{
    if (index >= s.size())
        return 0;
    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U')
    {
        return 1 + countVowels(s, index + 1);
    }
    else
    {
        return countVowels(s, index + 1);
    }
}
void solve()
{
    int ans;
    string s;
    getline(cin, s);
    cout << countVowels(s, 0);
}
int main()
{

    solve();
}