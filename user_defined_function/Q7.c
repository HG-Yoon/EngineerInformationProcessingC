#include <stdio.h>
int mp(int base, int exp)
{
    int res = 1;
    for (int i = 0; i < exp; i++)
    {
        res *= base;
    }
    /*
    base:2,exp=10이면
    0~10동안
    res*=2
    즉 2의 10제곱
    */
    return res;
}
int main()
{
    int res = mp(2, 10);
    printf("%d", res); // 1024
}