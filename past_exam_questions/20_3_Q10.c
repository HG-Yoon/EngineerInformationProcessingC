#include <stdio.h>
int r1()
{
    return 4;
}
int r10()
{
    return (30 + r1()); // 30+4=34
}
int r100()
{
    return (200 + r10()); // 200+34=234
}
int main()
{
    printf("%d\n", r100()); // 234
}