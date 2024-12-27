#include <stdio.h>
#include<
int choosecomp(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    comp = 's';
    printf("Choose one of them 's'for snake 'w'for water 'g'for gun ");
    scanf("%c", &you);
    int result = choosecomp(you, comp);
    if (result == 0)
    {
        printf("Match Draw!\n");
    }
    else if (result == 1)
    {
        printf("You Won!\n");
    }
    else
    {
        printf("You Lost!\n");
    }
    printf("you choose %c and computer choose %c", you, comp);

    return 0;
}