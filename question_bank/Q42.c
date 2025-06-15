#include <stdio.h>
// 문자열 복사 함수: s의 문자열을 d로 복사
void func(char *d, char *s)
{
    // s가 가리키는 문자가 널 문자가 아닌 동안 반복
    while (*s)
    {
        *d = *s; // s의 현재 문자를 d에 복사
        d++;     // d 포인터 증가
        s++;     // s 포인터 증가
    }
    *d = '\0'; // 복사 후 d 끝에 널 문자 추가 (문자열 종료 표시)
}

int main()
{
    // str1은 문자열 리터럴을 가리키는 포인터
    char *str1 = "first";
    // str2는 길이 50짜리 배열이며 초기값은 "teststring"
    char str2[50] = "teststring";
    int result = 0;
    // func() 호출로 str1("first")의 문자열을 str2로 복사
    // 즉, str2의 내용이 "first"로 바뀐다
    func(str2, str1);
    // str2는 이제 "first"
    // 문자열을 순회하면서 각 문자 위치의 인덱스를 result에 더함
    for (int i = 0; str2[i] != '\0'; i++)
    {
        result += i;
        /*
        각 i의 값 :
        i = 0 -> result += 0 (result = 0)
        i = 1 -> result += 1 (result = 1)
        i = 2 -> result += 2 (result = 3)
        i = 3 -> result += 3 (result = 6)
        i = 4 -> result += 4 (result = 10)
        종료: str2[5] == '\0'
        */
    }
    // 최종 결과 출력 : 10
    printf("%d\n", result);
    return 0;
}