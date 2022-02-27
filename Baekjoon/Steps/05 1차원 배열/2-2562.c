// 2022-02-27 Sun. 17:26
// 2562 ÃÖ´ñ°ª
#include <stdio.h>
int main()
{
    int nums[9] = {0, };
    for (int i = 0; i < 9; i++)
        scanf("%d", &nums[i]);
    int max = 0, pos = 0;
    for (int i = 0; i < 9; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
            pos = i;
        }
    }
    printf("%d\n%d", nums[pos], pos + 1);
}