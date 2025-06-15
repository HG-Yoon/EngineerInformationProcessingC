#include <stdio.h>
// 필드 범위 안인지 확인하는 함수 (인덱스 범위 벗어나지 않게 하기 위함)
int chkover(int w, int h, int j, int i)
{
    // j는 세로(y), i는 가로(x)
    if (i >= 0 && i < w && j >= 0 && j < h)
        return 1; // 범위 안에 있음
    return 0;     // 범위 벗어남
}
int main()
{
    // field: 지뢰가 있는지 여부를 저장한 2차원 배열 (1 = 지뢰, 0 = 빈칸)
    int field[4][4] = {{0, 1, 0, 1}, {0, 0, 0, 1}, {1, 1, 1, 0}, {0, 1, 1, 1}};

    // mines: 각 칸을 기준으로 주변 8칸에 지뢰가 몇 개인지 세는 배열
    // 각 지뢰는 자기 자신을 포함한 3x3 영역 전체에 영향을 줌
    int mines[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    int w = 4, h = 4; // 필드의 가로, 세로 크기

    // field 전체를 순회하며
    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            // 현재 위치에 지뢰가 없으면 무시
            if (field[y][x] == 0)
                continue;

            // 지뢰가 있는 칸이면, 자기 자신 포함한 3x3 영역을 순회
            for (int j = y - 1; j <= y + 1; j++) // j: 세로 인덱스
            {
                for (int i = x - 1; i <= x + 1; i++) // i: 가로 인덱스
                {
                    // 배열 범위를 벗어나지 않으면 해당 위치 값 증가
                    if (chkover(w, h, j, i) == 1)
                        mines[j][i] += 1;
                }
            }
        }
    }
    // mines 배열 출력
    printf("mines 배열 결과:\n");
    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            printf("%d ", mines[y][x]);
        }
        printf("\n");
    }
    /*
    mines 배열 결과:
    1 1 3 2
    3 4 5 3
    3 5 6 4
    3 5 5 3
    */
}
