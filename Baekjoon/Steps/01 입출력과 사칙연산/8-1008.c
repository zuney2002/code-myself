// 2022-02-26 Sat. 20:20
// 1008 A/B
#include <stdio.h>
int main()
{
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    c = (double)a / b;
    // �� �������� ���е��� �䱸�ϹǷ� ���� ���ڿ��� �����ؾ� �Ѵ�.
    printf("%.16f", c);
}