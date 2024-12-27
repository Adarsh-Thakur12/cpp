#include <stdio.h>
typedef struct account

{
    int acnum;
    char name[10];
    int balance;
    float interest;
} acc;
int main()
{
    acc c1, c2;
    printf("Enter Account Number:\n");
    scanf("%d", &c1.acnum);
    printf("Enter Account holder name:");
    scanf("%s", &c1.name);
    printf("Enter Account Balance:");
    scanf("%d", &c1.balance);
    printf("\n***********************************");
    printf("\nEnter Account Number:");
    scanf("%d", &c2.acnum);
    printf("\nEnter Account holder name:");
    scanf("%s", &c2.name);
    printf("\nEnter Account Balance:");
    scanf("%d", &c2.balance);
    printf("\n***********************************");
    printf(" \nAccount Number:%d", c1.acnum);

    printf("\n Account holder name:%s", c1.name);

    printf("\n Account Balance:%d", c1.balance);

    printf("\n***********************************");
      printf("\n Account Number:%d", c2.acnum);

  printf("\n Account holder name:%s", c2.name);

  printf("\n Account Balance:%d", c2.balance);

  printf("********************************");
    return 0;
}