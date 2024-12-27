#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int get_val(int r, int c, int n, int sz) {
    if (r >= n) {
        r = sz - r;
    }
    if (c >= n) {
        c = sz - c;
    }
    return n - (r < c ? r : c);
}

int main()
{
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.

    int sz = (n - 1) * 2;
    for (int r = 0; r <= sz; ++r) {
        for (int c = 0; c <= sz; ++c) {
            if (c > 0) printf(" ");
            printf("%d", get_val(r, c, n, sz));
        }
        printf("\n");
    }

    return 0;
}