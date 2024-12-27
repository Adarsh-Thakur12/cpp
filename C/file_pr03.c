#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    printf("Enter any table which you want table of:");
        scanf("%d",&num);
    ptr = fopen("jfdas.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, (i + 1), num * (i + 1));
    }
     printf("\nTable is printed to the mentioned file");
    fclose(ptr);
    return 0;
}