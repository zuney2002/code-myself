// 2022-02-27 Sun. 15:50
// 10951 A+B - 4
// �� scanf �Լ��� ��ȯ��, EOF�� ������ EOF(-1)�� ��ȯ�Ѵٿ� ����.
#include <stdio.h>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a+b);
}