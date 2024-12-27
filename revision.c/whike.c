#include <stdio.h>
// int main()
// {
//     int a = 0;
//     while (a < 100)
//     {
//         printf("%d\n", a);
//         a++;
//     }
//     return 0;
// }
// int main()
// {
//     int a = 0;
//     do
//         {
//             printf("%d\n ", a);
//             a++;
//         }
//     while (a < 100);
//     return 0;
// }
int main()
{
    int num=0,sum=0,n;
    scanf("%d",&n);
    for(int i=num;i<n;i++)
    {
         sum +=i;
        printf("%d",sum);

    }
    return 0;
}