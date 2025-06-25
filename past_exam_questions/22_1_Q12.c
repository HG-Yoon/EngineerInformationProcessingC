#include <stdio.h>
// 5를 입력받았을 때의 출력 결과?
int func(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * func(a - 1);
}

int main()
{
    int a;
    scanf("%d", &a);       // 5
    printf("%d", func(a)); // 120
}
/*
func(5) = 5 * func(4); // 120
func(4) = 4 * func(3); // 24
func(3) = 3 * func(2); // 6
func(2) = 2 * func(1); // 2
func(1) = 1;
*/