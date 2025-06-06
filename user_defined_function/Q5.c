#include <stdio.h>
int func()
{
    static int x = 0;
    x += 2;
    return x;
    /*
    static x
    --------
    0
    2
    4
    6
    8
    */
}

int main()
{
    /*
    x   |   sum     |   i
    ----------------------
    0   |    0      |   0
    1   |    2      |   1
    2   |    6      |   2
    3   |    12     |   3
    4   |    20     |   4
    */
    int x = 0;
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        x++;
        sum += func();
    }
    printf("%d", sum); // 20
    return 0;
}