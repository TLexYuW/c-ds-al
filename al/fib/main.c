#include <stdio.h>
#include <stdlib.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...
unsigned int fibRecursive(int number)
{
    if (number <= 1)
    {
        return number;
    }

    return fibRecursive(number - 1) + fibRecursive(number - 2);
}

unsigned int fibIerative(int number)
{
    if (number <= 1)
    {
        return number;
    }

    int n1 = 0;
    int n2 = 1;
    int res;
    for (int i = 2; i <= number; i++)
    {
        res = n1 + n2;
        n1 = n2;
        n2 = res;
    }

    return res;
}

int main(int argc, char const *argv[])
{

    int n = fibRecursive(5);
    printf("%d\n", n);

    int y = fibIerative(5);
    printf("%d\n", y);

    return 0;
}
