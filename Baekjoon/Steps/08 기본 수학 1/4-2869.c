// 2022-02-28 Mon. 19:26
// 2869 �����̴� �ö󰡰� �ʹ�
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    double rate = (double)(v-b) / (a-b);
    printf("%d", (int)ceil(rate));
}