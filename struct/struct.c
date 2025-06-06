#include <stdio.h>
struct jsu
{
    char nae[12];
    int os, db, hab, hhab;
};

int main()
{
    struct jsu st[3] = {
        {"데이터1", 95, 88},
        {"데이터2", 84, 91},
        {"데이터3", 86, 75}};
    struct jsu *p;
    p = &st[0]; // p에 st 배열의 첫 번째 요소의 주소를 저장한다.
    /*
    p+1이 가리키는 곳의 멤버 hab에 p+1이 가리키는 곳의 멤버 os 값과
    p+2이 가리키는 곳의 멤버 db 값을 더한 후 저장한다.
    p가 st[0]을 가리키므로 p+1은 st[1]을
    p+2는 st[2]를 가리킨다.
    따라서 st[1]의 os 값 84와 st[2]의 db 값 75를 더한 값 159를
    st[1]의 hab에 저장한다.
    */
    (p + 1)->hab = (p + 1)->os + (p + 2)->db; // 159
    /*
    p+1이 가리키는 곳의 멤버 hhab에
    p+1이 가리키는 곳의 멤버 hab 값과
    p가 가리키는 곳의 멤버 os와 db 값을 모두 더한 후 저장한다.
    st[1]의 hab 값 159, st[0]의 os와 db 값 95와 88을 모두 더한 값
    342를 st[1]의 hhab에 저장한다.
    */
    (p + 1)->hhab = (p + 1)->hab + p->os + p->db; // 342
    printf("%d", (p + 1)->hab + (p + 1)->hhab);   // 159+342=501
    return 0;
}