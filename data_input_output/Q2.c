#include <stdio.h>
int main()
{
    int i = 10, j = 10, k = 30;
    i /= j;                          // 10/=10, i=1
    j -= i;                          // 10 -= 1, j=9
    k %= j;                          // 30 %= 9, k=3
    printf("%d, %d, %d\n", i, j, k); // 1, 9, 3
}
