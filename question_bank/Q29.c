#include <stdio.h>
int main()
{
    int a, b = 10;
    for (a = 0; a < 5; ++a, b -= a)
        ;
    printf("%d, %d", a, b); // 5, -5
    return 0;
}
/*
a=0;10-=0,b=10;
a=1;10-=1,b=9;
a=2;9-=2,b=7;
a=3;7-=3,b=4;
a=4;4-=4,b=0
a=5;0-=5,b=-5
*/