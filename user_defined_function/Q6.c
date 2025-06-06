#include <stdio.h>
/*
2~13195 사이의 소수 중에서
13195의 약수인 수를 찾아 저장한 후
그 중 가장 큰 수를 출력하는 프로그램
*/

// 소수인지 판별하는 함수
// return 값이 1이면 소수
int isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int number = 13195;
    int max_div = 0;
    for (int i = 2; i < number; i++)
    {
        if (isPrime(i) == 1 && number % i == 0)
        {
            max_div = i;
        }
    }
    printf("%d", max_div); // 29
    return 0;
}