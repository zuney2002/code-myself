// 2022-02-27 Sun. 17:51
// 1546 ЦђБе
#include <stdio.h>
int main()
{
    int sz;
    float max = 0;
    float score[1000] = {0, };
    scanf("%d", &sz);
    for (int i = 0; i < sz; i++)
    {
        scanf("%f", &score[i]);
        if (score[i] > max)
            max = score[i];
    }

    float sum = 0;
    for (int i = 0; i < sz; i++)
    {
        score[i] = (score[i]/max)*100;
        sum += score[i];
    }
    printf("%.3f", sum / sz);
}