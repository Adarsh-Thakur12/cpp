#include <stdio.h>
#include <string.h>
struct employ
{
    int code;
    char name[10];
    float salary;
};
int main()
{
    struct employ e1;
    strcpy(e1.name, "Adarsh");
    e1.salary = 98.34;
    e1.code = 73947;
    printf("%s\n", e1.name);
    printf("%f\n", e1.salary);
    printf("%d\n", e1.code);
    return 0;
}
