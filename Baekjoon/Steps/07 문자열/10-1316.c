// 2022-02-28 Mon. 14:51
// 1316 그룹 단어 체커
#include <stdio.h>
#include <string.h>
int isgroup(char *str)
{
    int alpha[26] = {0, };
    int len = strlen(str);
    char cur = '\0';
    for (int i = 0; i < len; i++)
    {
        if (cur != str[i])
        {
            if (alpha[(int)str[i] - 97] == 1)
                return 0;
            alpha[(int)str[i] - 97] = 1;
            cur = str[i];
        }
    }
    return 1;
}
int main()
{
    int N;
    scanf("%d%*c", &N);
    int count = 0;
    while (N > 0)
    {
        char str[102];
        scanf("%s%*c", str);
        if (isgroup(str) == 1)
            count++;
        N--;
    }
    printf("%d", count);
}