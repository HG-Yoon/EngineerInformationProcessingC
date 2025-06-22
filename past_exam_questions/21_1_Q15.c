#include <stdio.h>
int main()
{
    struct insa
    {
        char name[10];
        int age;
    } a[] = {"Kim", 28, "Lee", 38, "Park", 42, "Choi", 31};
    struct insa *p;
    p = a;
    p++;
    printf("%s\n", p->name); // Lee
    printf("%d\n", p->age);  // 38
    return 0;
}