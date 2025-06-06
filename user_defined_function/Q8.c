#include <stdio.h>
void func(int **arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(*arr + 1) = (*(*arr + i) + i) % size;
    }
}
int main()
{
    int arr[] = {3, 1, 4, 1, 5}; // arr[5]
    int *p = arr;                // p는 arr의 첫 번째 요소를 가리킴
    int **pp = &p;               // pp는 p의 주소를 가리킴
    // **pp는 *p, 즉 arr[0]
    int num = 6;
    func(pp, 5);
    // func(pp, 5) 호출
    // *arr -> *pp -> p -> arr 배열의 시작 주소
    // *(*arr + 1) -> (*arr)[1] -> arr[1] 값을 계속 덮어쓰기
    // 즉, arr[1] = (arr[i] + i) % size 이며
    // 이 동작을 i = 0부터 4까지 반복
    /*
    반복문에 의한 값 변경
    size = 5
    반복하며 arr[1]에 대입되는 값 추적:
    | i | arr[i]  | (arr[i] + i) % 5  | arr[1] =  |
    | - | ------- | ----------------- | --------- |
    | 0 | 3       | (3 + 0) % 5 = 3   | 3         |
    | 1 | 1       | (1 + 1) % 5 = 2   | 2         |
    | 2 | 4       | (4 + 2) % 5 = 1   | 1         |
    | 3 | 1       | (1 + 3) % 5 = 4   | 4         |
    | 4 | 5       | (5 + 4) % 5 = 4   | 4         |
    최종적으로 arr[1] = 4 가 됨.
    */
    /*
    그 외 값들인
    arr[0], arr[2], arr[3], arr[4]는
    함수 내에서 수정되지 않음.
    arr = {3, 4, 4, 1, 5}
    (주의: arr[1]은 위 반복에서 마지막에 4로 대입됨)
    arr[2] = 4
    */
    num = arr[2];
    printf("%d", num); // 4
    return 0;
}