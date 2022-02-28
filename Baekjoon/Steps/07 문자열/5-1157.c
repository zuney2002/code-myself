// 2022-02-27 Sun. 21:39
// 1157 단어 공부
#include <stdio.h>
int main()
{
    int alpha[26] = {0, };
    char c;
    while ((c = getchar()) != '\n')
    {
        if ((int)c > 96 && (int)c < 123)
            c -= 32;
        alpha[c - 65]++;
    }
    int flag = -1, x = 0, pick = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > x)
        {
            flag = 0;
            x = alpha[i];
            pick = i;
        }
        else if (alpha[i] == x)
            flag = 1;
    }
    printf("%c", flag == 0 ? (char)(pick + 65) : '?');
}