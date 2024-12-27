#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("pr045.txt", "w");
    char a[10];
    char b[10];
    int num1;
    int num2;
    printf("Enter the Name of First Person:");
    scanf("%s", &b);
    printf("\nEnter the Number of First Person:");
    scanf("%d", &num1);
    printf("\nEnter the Name of Second Person:");
    scanf("%s", &a);
    printf("\nEnter the Number of Second Person:");
    scanf("%d", &num2);
    fprintf(ptr, "%d , %s\n", num1, b);
    fprintf(ptr, "%d , %s\n", num2, a);
    fclose(ptr);
    printf("Your program is completed See the text file for the output");
    return 0;
}