#include <stdio.h>
int main()
{
    FILE *ptr;
    int num = 324;
    ptr = fopen("gen.txt","w");
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}