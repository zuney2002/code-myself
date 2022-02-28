// 2022-02-27 Sun. 21:11
// 10809 ���ĺ� ã��
// �迭�� -1�� ȿ�������� �ʱ�ȭ�ϱ� ���� 'memset' �Լ��� ���(memory.h).
#include <stdio.h>
#include <memory.h>
int main()
{
    int alpha[26];
    memset(alpha, -1, sizeof(int)*26);
    char S[100];
    scanf("%s", S);
    for (int i = 0; ; i++)
    {
        if (S[i] == '\0')
            break;
        if (alpha[(int)S[i] - 97] == -1)
            alpha[(int)S[i] - 97] = i;
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", alpha[i]);
}