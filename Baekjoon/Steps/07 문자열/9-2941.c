// 2022-02-28 Mon. 14:21
// 2941 크로아티아 알파벳
#include <stdio.h>
#include <string.h>
int main()
{
    char str[102];
    scanf("%s", str);
    char form[][8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int chars = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < 8; j++)
        {
            int sz = strlen(form[j]);
            for (int k = 0; k < sz + 1; k++)
            {
                if (form[j][k] == '\0')
                    i += sz - 1;
                else if (form[j][k] != str[i + k])
                    break;
            }
        }
        chars++;
    }
    printf("%d", chars);
}