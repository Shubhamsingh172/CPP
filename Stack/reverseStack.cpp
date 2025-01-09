// #include <iostream>
// #include <stack>
// using namespace std;

// void Reverse(stack<int> &st)
// {
//     if (st.empty())
//         return;

//     int top = st.top();
//     st.pop();
//     Reverse(st); // idhar hum same kam wapas se karwa hai including this line and above two line

//     stack<int> temp;

//     while (!st.empty())
//     {
//         temp.push(st.top());
//         st.pop();
//     }

//     st.push(top);
//     while (!temp.empty())
//     {
//         st.push(temp.top());
//         temp.pop();
//     }
// }
// void insertAtBottom(stack<int> &st, int element)
// {
//     if (st.empty())
//     {
//         st.push(element);
//     }
//     int top = st.top();
//     st.pop();
//     insertAtBottom(st, element);
//     st.push(top);
// }
// void Reverse1(stack<int> &st)
// {
//     if(st.empty())
//         return;
    
//     int top = st.top();
//     st.pop();

//     Reverse1(st);
//     insertAtBottom(st,top);
// }
// int main()
// {
//     // stack<int>st {1,2,3,4,5,6}; directly initialization of the stack is not supported in many languages therefore we nedd to push
//     // the element otherwise we have to define a constructor for the stack

//     stack<int> st;
//     int n;
//     cout << "How many Elements : ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         int ele;
//         cin >> ele;
//         st.push(ele);
//     }
//     cout << "As stack works upon last in first out\n";
//     cout << "\n\nStack Before Reverse : ";

//     stack<int> temp = st; // copy the stack for printing as it clear the stack therefor it becomes empty.
//     while (!temp.empty())
//     {
//         cout << temp.top() << " ";
//         temp.pop();
//     }

//     // inserting element at the bottom in the stack using recursion
//     stack<int> temp1 = st;
//     Reverse1(temp1);
//     cout << "\n\nElement inserted at bottom : ";
//     while (!temp1.empty())
//     {
//         cout << temp1.top() << " ";
//         temp1.pop();
//     }

//     cout << "\nStack After Reverse : ";
//     stack<int>temp2 = st;
//     Reverse(temp2);

//     while (!temp2.empty())
//     {
//         cout << temp2.top() << " ";
//         temp2.pop();
//     }
//     return 0;
// }

#include <iostream>
#include <stack>
using namespace std;

void Reverse(stack<int> &st)
{
    if (st.empty())
        return;

    int top = st.top();
    st.pop();
    Reverse(st); // Recursive call to reverse the remaining stack

    stack<int> temp;

    while (!st.empty())
    {
        temp.push(st.top()); // Push remaining elements to temp stack
        st.pop();
    }

    st.push(top); // Push the original top back to the stack
    while (!temp.empty())
    {
        st.push(temp.top()); // Push elements from the temp stack back
        temp.pop();
    }
}

void insertAtBottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element); // Insert the element at the bottom when the stack is empty
        return;
    }

    int top = st.top();
    st.pop();
    insertAtBottom(st, element); // Recursive call to insert at bottom
    st.push(top); // Push the popped element back
}

void Reverse1(stack<int> &st)
{
    if (st.empty())
        return;
    
    int top = st.top();
    st.pop();

    Reverse1(st); // Recursive call to reverse the stack

    insertAtBottom(st, top); // Insert the popped element at the bottom
}

int main()
{
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

    stack<int> temp = st; // Copy the stack for printing
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    // Reverse using Reverse1 function
    stack<int> temp1 = st;
    Reverse1(temp1);
    cout << "\n\nElement inserted at bottom : ";
    while (!temp1.empty())
    {
        cout << temp1.top() << " ";
        temp1.pop();
    }

    // Reverse using Reverse function
    stack<int> temp2 = st; // Copy for reverse operation
    Reverse(temp2);

    cout << "\nStack After Reverse : ";
    while (!temp2.empty())  // Use temp2 to print the reversed stack
    {
        cout << temp2.top() << " ";
        temp2.pop();
    }
    return 0;
}

//copied this code as there is a logical error