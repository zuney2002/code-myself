// 2022-03-09 Wed. 17:56
// 4153 Á÷°¢»ï°¢Çü
#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && a == c && a == 0)
            return 0;
        int o = -1;
        if (a > b)
        {
            if (a > c)
                o = 0;
            else
                o = 2;
        }
        else
        {
            if (b > c)
                o = 1;
            else
                o = 2;
        }
        switch (o)
        {
            case 0:
                if (a*a == b*b + c*c)
                    o = -1;
                break;
            case 1:
                if (b*b == a*a + c*c)
                    o = -1;
                break;
            case 2:
                if (c*c == a*a + b*b)
                    o = -1;
                break;
        }
        if (o == -1)
            printf("right\n");
        else
            printf("wrong\n");
    }
}