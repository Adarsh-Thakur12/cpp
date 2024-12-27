#include <stdio.h>
int main()
{
    int num;
    FILE *ptr;
    ptr = fopen("inp.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("%d", num);

    return 0;
}
