#include <stdio.h>
#define MAX_SIZE 10

int isWhat[MAX_SIZE];
int point = -1;

int isEmpty()
{
    if (point == -1)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if (point == 10)
    {
        return 1;
    }
    return 0;
}

void into(int num)
{
    if (isFull() == 1)
    {
        printf("Full");
    }
    else
    {
        isWhat[++point] = num;
    }
}

int take()
{
    if (isEmpty() == 1)
    {
        printf("Empty");
    }
    else
    {
        return isWhat[point--];
    }
    return 0;
}

int main()
{
    into(5); // {5}
    into(2); // {5,2}
    while (!isEmpty())
    {
        printf("%d", take()); // 2
        into(4);              //{5,4}
        into(1);              // {5,4,1}
        printf("%d", take()); // 1
        into(3);              // {5,4,3}
        printf("%d", take()); // 3
        printf("%d", take()); // 4
        into(6);              // {5,6}
        printf("%d", take()); // 6
        printf("%d", take()); // 5
    }
}

/*
출력 결과
213465
*/