#include <iostream>
using namespace std;

int main (void)
{
    int n;
    cout << "Total elements : ";
    cin >> n;
    int elements[n];
    cout << "Enter Elements : ";
    for (int i = 0; i  < n; i++)
    {
        cin >> elements[i];
    }

    for (int i = 1; i < n; i++)
    {
        int temp = elements[i];
        int j = i - 1;

        while (j >= 0 && elements[j] > temp)
        {
            elements[j + 1] = elements[j];
            j--;
        }
        elements[j + 1] = temp;
    }

    for (int i = 0; i  < n; i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;
}

