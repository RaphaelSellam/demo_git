#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x;
    int *y;
    int z = 6;
    int t;
    x = &z;
    y = x;
    printf("%d %d", *x, *y);

    return 0;
}
