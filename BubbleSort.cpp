#include <iostream>

using namespace std;

int main (void)
{
    int n, temp;
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
        for (int j = i + 1; j  < n; j++)
        {
            if (elements[i] > elements[j])
            {
                temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;
            }
        }
    }

    for (int i = 0; i  < n; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;

}