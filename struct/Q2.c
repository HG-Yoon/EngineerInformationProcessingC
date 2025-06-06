#include <stdio.h>
struct A
{
    int n;
    int g;
};
int main()
{
    struct A st[2];
    for (int i = 0; i < 2; i++)
    {
        st[i].n = i;
        st[i].g = i + 1;
        /*
        st[0].n=0;
        st[0].g=1;
        st[1].n=1;
        st[1].g=2;
        */
    }
    printf("%d", st[0].n + st[1].g); // 0+2=2
    return 0;
}