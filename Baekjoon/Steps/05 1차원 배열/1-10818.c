// 2022-02-27 Sun. 16:24
// 10818 �ּ�, �ִ�
// �� �ݷ� ����! Case N�� 1�� ��� �ִ�, �ּڰ��� ����, ���� ���ǿ��� N�� 1�̻� 1,000,000 ������.
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