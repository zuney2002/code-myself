// 2022-02-27 Sun. 17:59
// 8958 OX����
// �� ���̰� 79������ ���ڿ��� ���� �� �����Ƿ� 'str' char �迭�� ���̴� 81(\n ����)���� ���ؾ� for ���꿡�� ���ϴ�.
#include <stdio.h>
int main()
{
    int a;
    scanf("%d%*c", &a);
    for (int i = 0; i < a; i++)
    {
        char str[81];
        gets(str);
        int score = 0, streak = 0;
        for (int j = 0; j < 80; j++)
        {
            if (str[j] == 'O')
                score += ++streak;
            else if (str[j] == 'X')
                streak = 0;
            else
                break;
        }
        printf("%d\n", score);
    }
}