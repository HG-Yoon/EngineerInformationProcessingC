#include <stdio.h>
int main()
{
    int a = 50;
    int *b = &a;
    *b = *b + 20;
    printf("%d, %d\n", a, *b); // 70, 70
    char *s;
    s = "gilbut";
    for (int i = 0; i < 6; i += 2)
    {
        printf("%c, ", s[i]);
        printf("%c, ", *(s + i));
        printf("%s\n", s + i);
        /*
        g, g, gilbut
        l, l, lbut
        u, u, ut
        */
    }
    return 0;
}