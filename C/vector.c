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
    v1.x = 32;
    v1.y = 54;
    printf("X coordinate of First Vector is %d and y coordinate of First Vector is %d\n", v1.x, v1.y);
    v2.x = 31;
    v2.y = 53;
    printf("X coordinate of Second Vector is %d and y coordinate of Second Vector is %d", v2.x, v2.y);
    sum = vectorsum(v1, v2);
    printf("Sum of X coordinate of both vector is %d\n", sum.x);
    printf("Sum of Y coordinate of both vector is %d", sum.y);
    return 0;
}