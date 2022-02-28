// 2022-02-28 Mon. 21:45
// 2839 설탕 배달
// 3kg와 5kg 단위를 사용가능, 11, 17, 38과 같은 수 생각, 탑-바텀 흐름으로 생각하기(작은 단위인 3을 먼저 나누어 보고 크기조정)
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int mm = -1;
    for (int i = (N / 3); i > -1; i--)
    {
        int x = N - (3 * i);
        if (x % 5 == 0)
        {
            if (mm == -1)
                mm = (x / 5) + i;
            else
                mm = (mm > (x / 5) + i) ? ((x / 5) + i) : mm;
        }
    }
    printf("%d", mm);
}