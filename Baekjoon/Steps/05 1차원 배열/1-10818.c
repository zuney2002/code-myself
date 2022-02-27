// 2022-02-27 Sun. 16:24
// 10818 최소, 최대
// ★ 반례 유의! Case N이 1인 경우 최대, 최솟값은 같음, 문제 조건에서 N은 1이상 1,000,000 이하임.
#include <stdio.h>
int nums[1000000];
int main()
{
    int N, M = -1000001, m = 1000001;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }
    M = nums[0];
    m = nums[0];
    for (int i = 0; i < N; i++)
    {
        if (nums[i] > M)
            M = nums[i];
        else if (nums[i] < m)
            m = nums[i];
    }
    printf("%d %d", m, M);
}