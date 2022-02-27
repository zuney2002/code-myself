// 2022-02-27 Sun. 20:33
// 15596 함수
// 이 문제는 함수 'sum'이 완성되었고 원하는 결괏값이 나오는지만 확인하므로 main 함수 없다.
#include <stdio.h>
long long sum(int *a, int n)
{
    long long s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s; 
}