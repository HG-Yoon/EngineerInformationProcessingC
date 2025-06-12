#include <stdio.h>
int main()
{
    int a, hap = 0;
    for (a = 0; a < 10; ++a, hap += a)
        ;

    printf("%d, %d\n", a, hap); // 10 55

    return 0;
}