#include <stdio.h>

int main (void)
{
    // Static Array
    int diff[25];
    printf("Static array declaration\n");
    for(int i = 0; i < 20; i++)
    {
        scanf("%d", &diff[i]);
    }
    for(int i = 0; i < 20; i++)
    {
        printf("%d\n", diff[i]);
    }

    //Dynamic Array
    printf("Dynamic array declaration\n");
    int arr[10], n, temp1, temp2;
    printf("\nSize of Array : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    // printing in reverse order
    printf("\nPrinting in reverse order\n");
    for(int i = n - 1 ; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    // Inserting in a position
    printf("Inserting in the position : ");
    int a;
    scanf("%d", &a);

    temp1 = diff[a-1];

    for(int i = 20; i >= a; i--)
    {
        diff[i] = diff[i - 1];
    }

    printf("Data in the position : ");
    scanf("%d", &diff[a-1]);

    for(int i = 0; i < 21; i++)
    {
        printf("%d\n", diff[i]);
    }




    //Deleting from an index
    printf("To be deleted in the position : ");
    int b;
    scanf("%d", &b);
    for (int i = 0; i < b - 1; i++)
    {
        printf("%d ",arr[i]);

    }
    for (int i = b - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
        printf("%d ",arr[i]);

    }


    //Updating a Value
    printf("\nData to be Updated in the position : ");
    scanf("%d", &b);
    printf("Data to be Updated : ");
    scanf("%d", &arr[b - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);

    }


    //Merging array
    printf("\nMerging Array \n");
    int nw1[20+n];
    for (int i = 0; i < 21; i++)
    {
        nw1[i] = diff[i];
    }
    for (int i = 21; i < 20 + n; i++)
    {
        nw1[i] = arr[i - 21];
    }
    printf("Merged array : ");
    for (int i = 0; i < 20 + n; i++)
    {
        printf("%d ", nw1[i]);
    }



    // Spliting Array
    printf("\nSplitting Array\nSplit from : ");
    scanf("%d", &a);
    int nw2[a], nw3[30];
    for (int i = 0; i < a; i++)
    {
        nw2[i] = nw1[i];
    }
    for (int i = a; i < 20 + n; i++)
    {
        nw3[i - a] = nw1[i];
    }
    printf("\nFirst array : ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", nw2[i]);
    }

    printf("\nSecond array : ");
    for (int i = 0; i < 20 + n - a; i++)
    {
        printf("%d ", nw3[i]);
    }

}
