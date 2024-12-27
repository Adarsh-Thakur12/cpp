#include <stdio.h>
int main()
{
    int a = 3;
    int b = 2;
    int table[3][2];
    printf("Enter the marks of student of subjects:");
    scanf("%d %d ", &table[0][0], &table[0][1]);
    printf("\nEnter the marks of student of subjects");
    scanf("%d %d", &table[1][0], &table[1][1]);
    printf("\nEnter the marks of student of subjects");
    scanf("%d %d", &table[2][0], &table[2][1]);
    printf("Marks of student ofsubjects:%d %d", table[0][0], table[0][1]);
    printf("\nMarks of student ofsubjects:%d %d", table[1][0], table[1][1]);
    printf("\nMarks of student ofsubjects:%d %d", table[2][0], table[2][1]);
    /*for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the marks of student of subjects %d %d:\n", i + 1, j + 1);
            scanf("%d", &table[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Marks of student ofsubjects:%d %d", table[0][0], table[0][1]);
            printf("\nMarks of student ofsubjects:%d %d", table[1][0], table[1][1]);
            printf("\nMarks of student ofsubjects:%d %d", table[2][0], table[2][1]);
        }
    }*/
    return 0;
}