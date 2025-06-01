#include <stdio.h>
int main()
{
    int i = 5, j = 4, k = 1, L, m;
    L = i > 5 || j != 0;
    // L = 5 > 5 || 4 != 0;
    // L = 1
    m = j <= 4 && k < 1;
    // m = 4 <= 4 && 1 < 1;
    // m = 0
    printf("%d, %d\n", L, m); // 1, 0
    return 0;
}