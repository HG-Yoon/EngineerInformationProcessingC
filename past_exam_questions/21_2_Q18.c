#include <stdio.h>
int main()
{
    int ary[3];
    int s = 0;
    *(ary + 0) = 1;
    ary[1] = *(ary + 0) + 2;
    ary[2] = *ary + 3;
    for (int i = 0; i < 3; i++)
    {
        s = s + ary[i];
    }
    printf("%d", s); // 8
}
/*
ary[0]=1;
ary[1]=1+2=3;
ary[2]=1+3=4;
i=0,s=0+1=1;
i=1,s=1+3=4;
i=2,s=4+4=8;
s=8
*/