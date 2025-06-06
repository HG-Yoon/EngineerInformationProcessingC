#include <stdio.h>
int main()
{
    int a[4] = {0, 2, 4, 8};
    int b[3];
    int *p;
    int sum = 0;
    for (int i = 1; i < 4; i++)
    {
        p = a + i;
        b[i - 1] = *p - a[i - 1];
        sum = sum + b[i - 1] + a[i];
        /*
        p=2일때,
        b[0]=2-a[0]=2-0=2
        sum=0+b[0]+a[1]=2+2=4.

        p=4일때,
        b[1]=4-a[1]=4-2=2
        sum=4+b[1]+a[2]=4+2+4=10.

        p=8일때,
        b[2]=8-a[2]=8-4=4
        sum=10+b[2]+a[3]=10+4+8=22
        */
    }
    printf("%d", sum); // 22
    return 0;
}