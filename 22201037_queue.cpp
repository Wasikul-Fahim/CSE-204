#include <bits/stdc++.h>
using namespace std;

void printQ (int *queue, int start, int size);

int main (void)
{
    int qSize, option;
    //take queue size from the user as input
    cout << "Queue Size : ";
    cin >> qSize;
    //declare the queue of that specified size
    int que[qSize];
    //declare a variable named as Rear and Front, initially the value of top will be -1
    int rear = -1, front = -1, item;
    while(1)
    {
        printf("\nType..\n1 to Enqueue\n2 to Dequeue\n3 to check if the Queue is Empty\n4 to check the Queue is Full\n0 to exit\n");
        scanf("%d", &option);
        if(option==1)
        {
            /*  If Rear = maximum size of the Queue then Print: Overflow
            else ask user what value to enqueue, name it as “item”  
            insert the specified number in the “Rear”-th index of the Queue */
            if (rear + 1 == qSize)
            {
                cout << "Overflow" << endl;
            }
            else
            {
                cout << "Enter Value : ";
                rear++;
                cin >> item;
                que[rear] = item;
                if(rear == 0)
                {
                    front = 0;
                }
                //print the Queue
                
                printQ(que, front, rear);
            }
        
        }
        else if(option==2)
        {
            /* If Front = N then Print: Underflow Else insert a null in the “Front”-th index 
            increment the value of Front by 1 print the Queue */
            if (front == -1)
            {
                cout << "Underflow" << endl;
            }
            else
            {
                que[front] = NULL;
                front++;
                printQ(que, front, rear);

                if (front > rear)
                {
                    front = -1;
                    rear = -1;
                }
            }
        }
        else if(option==3)
        {
            //return true(1) if Queue is empty, false(0) otherwise
            if (front < 1)
            {
                cout << "Queue is Empty" << endl;
            }
            else
            {
                cout << "Queue is not Empty" << endl;
            }
        }

        else if(option==4)

        {
            //return true(1) if Queue is Full, false(0) otherwise
            if (rear + 1 == qSize)
            {
                cout << "Queue is Full" << endl;
            }
            else
            {
                cout << "Queue is not Full" << endl;
            }
        }

        else if(option==0)

        {
            return 0;
        }
        else printf("Invalid input.\n");
    }
    return 0;

}

void printQ (int* queue,  int start, int size)
{
    for (int i = start; i <= size; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}