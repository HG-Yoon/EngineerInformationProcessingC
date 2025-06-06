#include <stdio.h>
// 사용할 사용자 정의 함수를 선언.
int factorial(int n);

int main()
{
    // 정수형 인수 한 개를 받는 정수형 함수 포인터 pf를 선언.0
    int (*pf)(int);
    // factorial 함수의 시작 주소를 함수 포인터 pf에 저장.
    pf = factorial;
    printf("%d", pf(3)); // 6
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}