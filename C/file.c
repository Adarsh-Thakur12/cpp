#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Adarsh.txt", "r");
    if (ptr == NULL)
    {
        printf("File Does Not Exist");
    }
    else
    {
        printf("File is open now you can read/write");
    }
    return 0;
}