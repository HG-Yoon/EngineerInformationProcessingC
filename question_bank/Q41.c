#include <stdio.h>
void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 11;
    int b = 19;
    /*
    swap() 함수를 호출할 때 a, b 변수의 주소를 전달한 것이 아니므로
    swap() 함수에서 a, b의 교환은 main() 함수의 a, b 변수에 영향을 주지 않음
    */
    swap(a, b);

    switch (a)
    {
    case 1:
        b += 1;
    case 11:
        b += 2; // b = 19 + 2 = 21
    default:
        b += 3; // b = 21 + 3 = 24
        break;
    }
    printf("%d", a - b); // 11 - 24 = -13
    /*  
    출력 결과
    -13
    */
}