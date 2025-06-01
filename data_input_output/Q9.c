#include <stdio.h>
int main()
{
    int m = 4620;
    // 정답 코드
    int a = m / 1000;       // (1)
    int b = m % 1000 / 500; // (2)
    int c = m % 500 / 100;  // (3)
    int d = m % 100 / 10;   // (4)

    // 결과는 제대로 나오지만 문제에서 요구하는 방식이 아니었던 코드.
    // int a = m / 1000;
    // int i = m % 1000;
    // int b = i / 500;
    // i %= 500;
    // int c = i / 100;
    // i %= 100;
    // int d = i / 10;

    printf("1000원의 개수 : %d\n", a);
    printf("500원의 개수 : %d\n", b);
    printf("100원의 개수 : %d\n", c);
    printf("10원의 개수 : %d\n", d);
    return 0;
}