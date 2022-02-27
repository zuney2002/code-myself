// 2022-02-27 Sun. 20:38
// 4673 ¼¿ÇÁ ³Ñ¹ö
#include <stdio.h>
int nums[10001] = {0, };
int d(int n)
{
    int ans = n;
    while (n != 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
int main()
{
    for (int i = 1; i < 10001; i++)
    {
        int ans = d(i);
        if (ans < 10001)
            nums[ans] = 1;
    }
    for (int i = 1; i < 10001; i++)
    {
        if (nums[i] == 0)
            printf("%d\n", i);
    }
}