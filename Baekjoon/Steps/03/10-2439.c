// 2022-02-26 Sat. 22:41
// 2439 �� ��� -2
#include <stdio.h>
int main()
{
    // ����! ��ġ ������ ��Ȯ�� �ؾ� �Ѵ�.
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
            printf(" ");
        for (int k = 0; k < n - i + 1; k++)
            printf("*");
        printf("\n");
    }
}