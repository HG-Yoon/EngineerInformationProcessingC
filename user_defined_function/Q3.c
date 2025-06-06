#include <stdio.h>
char n[30];
char *getname()
{
    printf("이름 입력 : ");
    gets(n);
    return n;
}

int main()
{
    char *n1 = getname();
    char *n2 = getname();
    char *n3 = getname();
    printf("%s\n", n1); // 박영희
    printf("%s\n", n2); // 박영희
    printf("%s\n", n3); // 박영희
    return 0;
}