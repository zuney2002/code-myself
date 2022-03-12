// 2022-03-09 Wed. 14:56
// 4948 ����Ʈ�� ����
// �� math.h�� sqrt() �Լ��� ������ ������. i*i Ʈ������ ������ �����ϱ�.
#include <stdio.h>
int isp(int n)
{
    if (n == 1)
        return 0;
    else if (n % 2 == 0)
        return n == 2 ? 1 : 0;
    for (int i = 3; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int N;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
            return 0;
        int c = 0;
        for (int i = 2*N; i > N; i--)
            if (isp(i) == 1)
                c++;
        printf("%d\n", c);
    }
}