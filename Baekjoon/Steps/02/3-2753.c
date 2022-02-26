// 2022-02-26 Sat. 21:30
// 2753 À±³â
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf(((a % 4 == 0) & (a % 100 != 0)) | (a % 400 == 0) ? "1" : "0");
}