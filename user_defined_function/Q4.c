#include <stdio.h>
int func(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * func(a - 1);
}
int main()
{
    int a;
    scanf("%d", &a);       // 5
    printf("%d", func(a)); // 5!=5*4*3*2*1=120
    return 0;
}