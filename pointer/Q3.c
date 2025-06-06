#include <stdio.h>
int main()
{
    int *array[3];
    int a = 12, b = 24, c = 36;
    printf("%d", *array[1] + **array + 1); // 24+12+1=37
    // 37
    return 0;
}