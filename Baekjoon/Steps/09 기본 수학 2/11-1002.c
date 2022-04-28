// 2022-04-28 Tue. 22:19
// 1002 ем╥©
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int x1, y1, x2, y2, r1, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        double Distance = sqrt(((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));
        if (Distance == 0)
        {
            if (r1 != r2)
                printf("0\n");
            else
                printf("-1\n");
        }
        else if (r1 == r2)
        {
            if (Distance == 2*r1)
                printf("1\n");
            else if (Distance > 2*r1)
                printf("0\n");
            else
                printf("2\n");
        }
        else if (r1 > r2)
        {
            if ((Distance == r1 - r2) || (Distance == r1 + r2))
                printf("1\n");
            else if ((Distance > r1 - r2) && (Distance < r1 + r2))
                printf("2\n");
            else
                printf("0\n");
        }
        else
        {
            if ((Distance == r2 - r1) || (Distance == r1 + r2))
                printf("1\n");
            else if ((Distance > r2 - r1) && (Distance < r1 + r2))
                printf("2\n");
            else
                printf("0\n");
        }
    }
}