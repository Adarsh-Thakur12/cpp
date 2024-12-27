#include <stdio.h>
typedef struct cal
{
    int date;
    char month[10];
    int year;
} DATE;
int main()
{
    DATE d1;
    printf("Enter the Date ");
    scanf("%d", &d1.date);
    printf("Enter the Month ");
    scanf("%s", &d1.month);
    printf("Enter the Year ");
    scanf("%d", &d1.year);
    printf("\n*************\n");
    printf("%d/", d1.date);
    printf("%s/", d1.month);12
    printf("%d", d1.year);
    return 0;
}