// 2022-02-27 Sun. 15:50
// 10951 A+B - 4
// ★ scanf 함수의 반환값, EOF를 만나면 EOF(-1)을 반환한다에 착안.
#include <stdio.h>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a+b);
}