#include <stdio.h>
int main()
{
    int a = 3;
    int b = 10;
    int arr[3][10];
    for (int i = 1; i <= 10; i++)
    {
        arr[0][i] = 2 * i;
        // arr[1][i] = 7 * i;
        // arr[2][i] = 9 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        arr[1][i] = 7 * i;
    }

    for (int i = 1; i <= 10; i++)
    {
        arr[2][i] = 9 * i;
    }
    for (int i = 1; i <= 10; i++)
    {
        printf("2 X %d = %d\n", i, arr[0][i]);
        // printf("7 X %d = %d\n", i, arr[1][i]);
        // printf("9 X %d = %d\n", i, arr[2][i]);
    }
    printf("***************************************\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("7 X %d = %d\n", i, arr[1][i]);
    }
    printf("***************************************\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("9 X %d = %d\n", i, arr[2][i]);
    }
    printf("***************************************\n");
    return 0;
}