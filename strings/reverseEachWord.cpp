#include <iostream>
using namespace std;

class Stack
{
    int top = -1;
    char arr[20];

    public:
        bool isEmpty()
        {
            return top == -1;
        }
        void push(char e)
        {
            arr[++top] = e;
        }
        char pop()
        {
            return arr[top--];
        }
};
int main()
{
    Stack stack;
    string input;

    cout << "Enter an input String : ";
    getline(cin, input);

    int i = 0;
    cout << "Output String : ";
    do
    {
        if(input[i] == 32 || input[i] == 0)
        {
           while(!stack.isEmpty())
                cout << stack.pop();
           cout << " ";
        }
        else
            stack.push(input[i]);
    }while(input[i++]);

    cout << endl;

    return 0;
}