// 2022-02-28 Mon. 14:14
// 5622 ´ÙÀÌ¾ó
#include <stdio.h>
int maska[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10 ,10};

int main()
{
    char s[17];
    scanf("%s", s);
    int t = 0;
    for (int i = 0; ; i++)
    {
        if (s[i] == '\0')
            break;
        t += maska[(int)s[i] - 65];
    }
    printf("%d", t);
}