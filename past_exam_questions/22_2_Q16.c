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
    }
    printf("%d", sum);
    return 0;
}
/*
i=1,
*p=2
b[0]=2;
sum=4;

i=2,
*p=4;
b[1]=2;
sum=10;

i=3,
*p=8;
b[2]=4;
sum=22;

출력결과
22
*/