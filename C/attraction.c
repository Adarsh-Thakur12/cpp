#include <stdio.h>
float force(int mass);
int main()
{
    int m;
    printf("Enter the value of mass in kgs:");
    scanf("%d",&m);
    printf("The Value of Force in Newton:%f",force(m));
    return 0;
}
float force(int mass)
{
    float force;
    force = mass * 9.8;
    return force;
}