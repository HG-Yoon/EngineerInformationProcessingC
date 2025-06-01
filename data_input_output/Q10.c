#include <stdio.h>
int main()
{
    int a = 5, b = 10, c = 15, d = 30, result;
    result = a * 3 + b > d || c - b / a <= d && 1;
    // 5 * 3 + 10 > 30 || 15 - 10 / 5 <= 30 && 1;
    // 25 > 30 || 13 <= 30 && 1;
    // 0 || 1 && 1;
    // 1 && 1;
    // 1
    printf("%d\n", result); // 1
    return 0;
}