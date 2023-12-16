#include <stdio.h>

int add_at_end(int arr[], int freePos, int data);

int main()
{
    int arr[10];
    int i, n, freePos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    freePos = n;
    freePos = add_at_end(arr, freePos, 65);

    for (i = 0; i < freePos; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

int add_at_end(int arr[], int freePos, int data)
{
    arr[freePos] = data;
    freePos++;
    return freePos;
}
