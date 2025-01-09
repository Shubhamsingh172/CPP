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

//     stack<int> temp1 = st;
//     stack<int> temp = st; // copy the stack for printing as it clear the stack therefor it becomes empty.
//     while (!temp.empty())
//     {
//         cout << temp.top() << " ";
//         temp.pop();
//     }

//     // inserting element at the bottom in the stack using recursion
//     Reverse1(temp1);

//     cout << "\n\nElement inserted at bottom : ";
//     while (!temp1.empty())
//     {
//         cout << temp1.top() << " ";
//         temp1.pop();
//     }

//     cout << "\nStack After Reverse : ";
//     Reverse(st);

//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }

//     return 0;
// }