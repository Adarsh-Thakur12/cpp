#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nattempt=1;
    srand(time(0));
    number = rand() % 100 + 1; 
    do
    {
        printf("Enter any Number:");
        scanf("%d", &guess);
        if (number < guess)
        {
            printf("Lower Number Please\n");
        }
        else if (number > guess)
        {
            printf("Greater Number Please\n");
        }
        else
        {
            printf("You Won Congratulations\nYou Guessed in %d attempt",nattempt);
        }
        nattempt++;
    } while (number != guess);
return 0;
}