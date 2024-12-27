#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("Enter the Number you want table of :");
        scanf("%d",&num);
    ptr = fopen("tablenum.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d X %d = %d\n", num, (i + 1), num * (i + 1));
    }
    fclose(ptr);
    return 0;
}