// 정수를 역순으로 출력하는 프로그램
#include <stdio.h>
int main()
{
    int number = 1234;
    int div = 10;
    int result = 0;

    while (number > 0)
    {
        result = result * div;
        result = result + number % div;
        number = number / div;
    }
    printf("%d", result); // 4321
    return 0;
}
