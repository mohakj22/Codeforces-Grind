#include <bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return -1;
}
string infixToPostfix(string &s)
{
    int n = s.length();
    stack<char> st;
    string ans;
    for (int i = 0; i < n; ++i)
    {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            ans.push_back(ch);
        }
        else if (ch == '(')
            st.push(ch);
        else if (ch == ')')
        {
            while (st.top() != '(')
            {
                ans.push_back(st.top());
                st.pop();
            }
            st.pop(); // remove the opening parantheses as well
        }
        else
        {
            while (!st.empty() && precedence(ch) <= precedence(st.top()))
            {
                ans.push_back(st.top());
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main()
{
}