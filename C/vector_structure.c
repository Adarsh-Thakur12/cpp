#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector vectorsum(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    struct vector v1, v2, sum;

    v1.x = 12;
    v1.y = 23;
     printf("Value of vectors x coordinate is %d and value of vectors
     y coordiante is %d",v1.x,v1.y);
    
    v2.x = 14;
    v2.y = 11;
      printf("value of vectors x coordinate is %d and value of vectors
     y coordiante is %d",v2.x,v2.y);
    sum = vectorsum(v1, v2);
    printf("Sum of vectors x coordinate is %d and sum of vectors
     y coordiante is %d",sum.x,sum.y);
    
    return 0;
}
