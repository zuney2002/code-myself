// 2022-02-28 Mon. 20:19
// 2775 �γ�ȸ���� ���׾�
// �������� Ȱ��, �� ���� �Ϲ����� ���ϸ� ��Ģ���� ����
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T > 0)
    {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);
        int r = 1;
        for (int i = 0; i <= k; i++)
        {
            r *= (n + i);
            r /= (i + 1);
        }
        printf("%d\n", r);
        T--;
    }
}