// 2022-02-26 Sat. 23:05
// 10870 피보나치 수 5
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
        return 0;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
}