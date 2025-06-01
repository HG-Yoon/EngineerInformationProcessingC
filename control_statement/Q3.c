#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v1 = 0;
    int v2 = 35;
    int v3 = 29;
    if (v1 > v2 ? v2 : v1)
    {
        // 0 > 35 ? 35 : 0
        // 0
        // false
        v2 = v2 << 2;
    }
    else
    {
        v3 = v3 << 2;
        // a << b는 산술적 왼쪽 시프트
        // a * 2^b와 같다.
        // v3 = 29 << 2
        // v3 = 29 * 2^2 = 29 * 4 = 116
    }
    printf("%d", v2 + v3); // 35 + 116 = 151
    return 0;
}