#include <stdio.h>
void prnt(int *a, int *b, int *c);

int main()
{
    int a = 0, b = 5, c = 0;
    prnt(&a, &b, &c);
    printf("a=%d, b=%d, c=%d\n", a, b, c); // a=5, b=5, c=15
    return 0;
}

void prnt(x, y, z) int *x, *y, *z;
{
    while (*x < *y)
    {
        ++*x;
        *z = *z + *x;
        prnt(x, y, z);
    }
}
/*
a   b   c
1   5   1
2   5   3
3   5   6
4   5   10
5   5   15
*/