// 2022-02-27 Sun. 17:59
// 8958 OX퀴즈
// ★ 길이가 79까지인 문자열이 들어올 수 있으므로 'str' char 배열의 길이는 81(\n 포함)으로 정해야 for 연산에서 편리하다.
#include <stdio.h>
int main()
{
    int a;
    scanf("%d%*c", &a);
    for (int i = 0; i < a; i++)
    {
        char str[81];
        gets(str);
        int score = 0, streak = 0;
        for (int j = 0; j < 80; j++)
        {
            if (str[j] == 'O')
                score += ++streak;
            else if (str[j] == 'X')
                streak = 0;
            else
                break;
        }
        printf("%d\n", score);
    }
}