#include <bits/stdc++.h>
using namespace std;

class myStack
{
    vector<int> v;

public:
    void push(int n)
    {
        v.push_back(n);
    }

    int pop()
    {
        if (v.empty())
        {
            throw runtime_error("Stack Underflow: Cannot pop from an empty stack");
        }
        int topElement = v.back();
        v.pop_back();
        return topElement;
    }

    int top()
    {
        if (v.empty())
        {
            throw runtime_error("Stack is empty: No top element");
        }
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;

    try
    {
        cout << "Pushing elements: 10, 20, -1\n";
        st.push(10);
        st.push(20);
        st.push(-1);

        cout << "Current top: " << st.top() << "\n";
        cout << "Size: " << st.size() << "\n";

        cout << "Popping: " << st.pop() << "\n";
        cout << "Current top: " << st.top() << "\n";
        cout << "Popping: " << st.pop() << "\n";
        cout << "Popping: " << st.pop() << "\n";

        cout << "Trying to pop from empty stack...\n";
        cout << "Popping: " << st.pop() << "\n";
    }
    catch (const exception &e)
    {
        cout << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}
