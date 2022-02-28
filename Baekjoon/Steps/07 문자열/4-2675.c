// 2022-02-27 Sun. 21:31
// 2675 문자열 반복
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int R;
        char S[20];
        scanf("%d %s%*c", &R, S);
        for (int j = 0; ; j++)
        {
            if (S[j] == '\0')
            {
                printf("\n");
                break;
            }
            for (int k = 0; k < R; k++)
                printf("%c", S[j]);
        }
    }
}