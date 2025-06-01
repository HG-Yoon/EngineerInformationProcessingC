#include <stdio.h>
int main()
{
    int result, a = 100, b = 200, c = 300;
    result = a < b ? b++ : --c;           // b++, 200
    printf("%d, %d, %d\n", result, b, c); // 200, 201, 300
    return 0;
}