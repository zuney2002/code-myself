// 2022-02-27 Sun. 16:07
// 1110 더하기 사이클
#include <stdio.h>
int main()
{
    int number, x = -1, cycle = 0;
    scanf("%d", &number);
    while (number != x)
    {
        cycle++;
        if (x == -1)
        {
            if (number < 10)
                x = number * 10 + number;
            else
            {
                if ((number / 10) + (number % 10) >= 10)
                    x = (number % 10) * 10  + ((number / 10) + (number % 10)) % 10;
                else
                    x = (number % 10) * 10 + (number / 10) + (number % 10);
            }
            continue;
        }
        if (x < 10)
            x = (x * 10) + x;
        else
        {
            if ((x / 10) + (x % 10) >= 10)
                    x = (x % 10) * 10  + ((x / 10) + (x % 10)) % 10;
                else
                    x = (x % 10) * 10 + (x / 10) + (x % 10);
        }
    }
    printf("%d", cycle);
}