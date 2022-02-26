// 2022-02-26 Sat. 20:30
// 10926 ??!
#include <stdio.h>
#include <string.h>
int main()
{
    char ID[51];
    scanf("%s", ID);
    char* concat;
    // 아이디에 ??! 문자열 이어붙이기이므로 string 헤더 참조 후 concat하는 strcat 함수 이용한다.
    concat = strcat(ID, "??!");
    printf("%s", concat);
}