// 2022-02-28 Mon. 17:41
// 2292 벌집
// 수열의 특성 이용: 계차수열이므로 수열의 합으로 N 위치 특정 후 근의공식, 입력 최대값이 10억, 계산 시 최대 120억 갈 수 있으므로 long long
#include <stdio.h>
#include <math.h>
int main()
{
    long long N;
    scanf("%lld", &N);
    double x = (3 + sqrt(N*12 - 3)) / 6;
    printf("%lld", (long long)ceil(x));
}