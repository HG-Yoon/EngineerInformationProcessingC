#include <stdio.h>
// 완전수인지를 판별하는 메소드
/*
완전수 : 어떤 정수의 약수 중
자신을 제외한 약수를 모두 합하면
자신과 같아지는 수.
*/
int isPerfectNum(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int r = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (isPerfectNum(i))
        {
            r += i;
        }
    }
    printf("%d", r); // 34
}
/*
1~100 중에서 완전수:
6, 28
*/