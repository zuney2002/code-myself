// 2022-02-27 Sun. 20:22
// 4344 평균은 넘겠지
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int a;
        int scores[1000] = {0, };
        float sum = 0;
        scanf("%d", &a);
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &scores[i]);
            sum += scores[i];
        }
        sum /= a;
        int count = 0;
        for (int i = 0; i < a; i++)
        {
            if (scores[i] > sum)
                count++;
        }
        printf("%.3f%%\n", (float)count * 100 / a);
        t--;
    }
}