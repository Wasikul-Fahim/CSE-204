#include <iostream>
using namespace std;
// take stack size from the user as input
int sz = 100;

// declare the stack of that specified size
int stack[100];

// declare a variable named as top, initially the value of top will be
int top = -1;
void PrintStack(void)
{
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}

void Push(void)
{
    // If Top = maximum size of the stack then Print: Overflow and
    if (top == sz)
    {
        cout << "Overflow" << endl;
        return;
    }
    else
    {
        cout << "Value : ";
        top++;
        cin >> stack[top];
    }
}

void Pop(void)
{
    // If top = -1 then Print:
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    else
    {
        stack[top] = NULL;
        top--;
    }
}

int isEmpty(void)
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(void)
{
    if (top != sz)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void SizeOf(void)
{
    cout << "Size of Stack : " << (top + 1);
}

void Peek(void)
{
    cout << stack[top] << endl;
}

int main(void)
{
    while (1)
    {
        printf("\n\nType..\n1 to push\n2 to pop\n3 to check if the stack is Empty\n4 to check the stack is Full\n5 to check the size of stack\n6 to Check top Element\n0 to exit\n");
        int option;
        cin >> option;
        if (option == 1)
        {
            Push();
            // print the stack
            PrintStack();
        }
        else if (option == 2)
        {
            Pop();
            // print the stack
            PrintStack();
        }
        else if (option == 3)
        {
            // return true(1) if stack is empty, false(0) otherwise
            if (isEmpty())
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                cout << "Stack is not Empty" << endl;
            }
        }

        else if (option == 4)

        {
            // return true(1) if stack is Full, false(0) otherwise
            if (isFull())
            {
                cout << "Stack is Full" << endl;
            }
            else
            {
                cout << "Stack is not Full" << endl;
            }
        }
        else if (option == 5)
        {
            SizeOf();
        }
        else if (option == 6)
        {
            Peek();
        }

        else if (option == 0)
        {
            return 0;
        }
        else
            printf("Invalid input.\n");
    }
    return 0;
}