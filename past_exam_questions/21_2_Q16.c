#include <stdio.h>
int mp(int base, int exp)
{
    int res = 1;
    for (int i = 0; i < exp; i++)
    {
        res *= base;
    }
    return res;
}
int main()
{
    int res;
    res = mp(2, 10);
    printf("%d", res); // 1024
    return 0;
}
/*
mp(2,10)
res=1;
i=0,res=2
i=1,res=4
i=2,res=8
i=3,res=16
i=4,res=32
...
i=9,res=1024
*/