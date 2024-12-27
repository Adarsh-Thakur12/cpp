#include <stdio.h>
int main()
{
    int arr[10];
    int num;
    int i;
    printf("Enter any Number:");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {

        arr[i] = num * (i + 1);
    }
    for (i = 0; i <10; i++)
    {
        printf("%d X %d = %d\n", num, (i + 1), arr[i]);
    }

    return 0;
}