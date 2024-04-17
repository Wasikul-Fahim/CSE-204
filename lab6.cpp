#include <iostream>
using namespace std;
int main(void)
{
    int rear=0, front=0, n, item, opt, i;
    cout << "Size of Queue : ";
    cin >> n;
    int cQue[n];
    while(1)
    {
        cout << "1. Enque\n2. Deque\n3. Display\n0. Exit\n";
        cin >> opt;
        if(opt == 1)
        {
            cout << "Enqueing : ";
            cin >> item;

            if((front==1 && rear==n) || (front==rear+1))
            {
                cout << "Overflow";

            }
            else if(rear==0 && front==0)
            {
                front=1;
                rear=1;
            }
            else if(rear==n)
            {
                rear=1;
            }
            else
            {
                rear++;
            }
            cQue[rear]=item;


        }

        else if(opt == 2)
        {
            if (front == 0)
            {
                cout << "Underflow\n";

            }

            item = cQue[front];
            cout << item << endl;

            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            else if (front == n)
            {
                front = 1;
            }
            else
            {
                front++;
            }


        }
        else if(opt == 3)
        {
            if(front==0)
            {
                cout << "The queue is empty" << endl;

            }
            else
            {
                cout << "The queue : ";

                i = front;
                while (i!=rear)
                {

                    cout << cQue[i] << " ";
                     if (i==n)
                       {
                          i = 1;
                       }
                    else
                       {
                          i++;
                       }
                }

                cout << cQue[rear] << endl;
                }
            }

        else if(opt == 0)
        {
            return 0;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
    }

}