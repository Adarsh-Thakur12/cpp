#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nattempt = 1;
    srand(time(0));
    number = rand() % 100 + 1; //It will give numbre between 1 to 100
    printf("Random Number is:%d", number);
}
