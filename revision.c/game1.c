#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    int num, cnum = 1;
    
    do
    {
        printf("Enter Any NUmber: ");
        scanf("%d", &num);
        if (number>num)
        {
            printf("Smaller Number choose little more\n");
        }
        else if (number<num)
        {
            printf("Larger Number choose smaller number\n");
        }
        else
        {
            printf("Congratulations!! You Won the game in %d attempt",cnum);
        }
        cnum++;

    } while (number != num);
    return 0;
}