// 2022-02-28 Mon. 22:22
// 10757 큰 수 A+B
// 0은 ASCII 48번
#include <stdio.h>
#include <string.h>
void revstr(char *a)
{
    char x[10003];
    int len = strlen(a) - 1;
    strcpy(x, a);
    for (int i = len; i > -1; i--)
        a[len - i] = x[i];
    a[len + 1] = '\0';
}
int main()
{
    char a[10002];
    char b[10002];
    char ans[10003];
    scanf("%s %s", a, b);
    revstr(a);
    revstr(b);
    char carry = '0';
    for (int i = 0; ; i++)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            if (carry != '0')
            {
                ans[i] = carry;
                ans[i + 1] = '\0';
            }
            else
                ans[i] = '\0';
            break;
        }
        int x = (int)((a[i] == '\0') ? 0 : a[i] - 48) + (int)((b[i] == '\0') ? 0 : b[i] - 48) + (int)(carry - 48);
        if (x / 10 > 0)
            carry = (char)((x / 10) + 48);
        else
            carry = '0';
        ans[i] = (char)((x % 10) + 48);
    }
    revstr(ans);
    printf("%s", ans);
}