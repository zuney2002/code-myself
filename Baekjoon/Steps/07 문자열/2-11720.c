// 2022-02-27 Sun. 21:06
// 11720 숫자의 합
#include <stdio.h>
int main()
{
    int len, sum = 0;
    scanf("%d", &len);
    char str[102];
    scanf("%s", str);
    for (int i = 0; i < len; i++)
        sum += (int)str[i] - 48;
    printf("%d", sum);
}