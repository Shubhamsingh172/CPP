#include <iostream>
#include <stack>
using namespace std;

void Reverse(stack<int> &st)
{
    if(st.empty())
        return;
    
    int top = st.top();
    st.pop();
    Reverse(st); // idhar hum same kam wapas se karwa hai including this line and above two line

    stack<int> temp;

    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    
    st.push(top);
    while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    // stack<int>st {1,2,3,4,5,6}; directly initialization of the stack is not supported in many languages therefore we nedd to push
    // the element otherwise we have to define a constructor for the stack

    stack<int> st;
    int n;
    cout << "How many Elements : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        st.push(ele);
    }
    cout << "As stack works upon last in first out\n";
    cout << "\n\nStack Before Reverse : ";

    stack<int> temp = st; // copy the stack for printing as it clear the stack therefor it becomes empty.
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << "\nStack After Reverse : ";
    Reverse(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}