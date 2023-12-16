#include <stdio.h>

int add_at_end(int arr[], int new_arr[], int origin_size, int freePos, int data);

int main()
{
    int arr[3];
    int i, n, freePos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size = %d\n", size);

    freePos = n;
    if (n == size)
    {
        printf("Input element n size same as arr\n");
        int new_arr[size + 2];
        freePos = add_at_end(arr, new_arr, size, freePos, 9999);
        for (i = 0; i < freePos; i++)
        {
            printf("%d ", new_arr[i]);
        }
    }

    return 0;
}

int add_at_end(int arr[], int new_arr[], int origin_size, int freePos, int data)
{
    int i;
    for (i = 0; i < origin_size; i++)
    {
        new_arr[i] = arr[i];
    }
    new_arr[freePos] = data;
    freePos++;
    return freePos;
}
