#include <iostream>

using namespace std;

int main (void)
{
    int n, min, index, temp, flag = 0;
    cout << "Total elements : ";
    cin >> n;
    int elements[n];
    cout << "Enter Elements : ";
    for (int i = 0; i  < n; i++)
    {
        cin >> elements[i];
    }


    for (int i = 0; i  < n - 1; i++)
    {
        min = elements[i];
        for (int j = i + 1; j  < n; j++)
        {
            if (min >= elements[j])
            {
                min = elements[j];
                index = j;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            temp = elements[i];
            elements[i] = min;
            elements[index] = temp;
        }
        
        flag = 0;

    }

    for (int i = 0; i  < n; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

}
