// 2022-02-26 Sat. 23:01
// 10872 ÆÑÅä¸®¾ó
#include <stdio.h>
int factorial(int n)
{
    if ((n == 1) | (n == 0))
        return 1;
    else
        return n * factorial(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
}