// 2022-02-28 Mon. 17:41
// 2292 ����
// ������ Ư�� �̿�: ���������̹Ƿ� ������ ������ N ��ġ Ư�� �� ���ǰ���, �Է� �ִ밪�� 10��, ��� �� �ִ� 120�� �� �� �����Ƿ� long long
#include <stdio.h>
#include <math.h>
int main()
{
    long long N;
    scanf("%lld", &N);
    double x = (3 + sqrt(N*12 - 3)) / 6;
    printf("%lld", (long long)ceil(x));
}