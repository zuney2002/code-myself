// 2022-02-26 Sat. 20:30
// 10926 ??!
#include <stdio.h>
#include <string.h>
int main()
{
    char ID[51];
    scanf("%s", ID);
    char* concat;
    // ���̵� ??! ���ڿ� �̾���̱��̹Ƿ� string ��� ���� �� concat�ϴ� strcat �Լ� �̿��Ѵ�.
    concat = strcat(ID, "??!");
    printf("%s", concat);
}