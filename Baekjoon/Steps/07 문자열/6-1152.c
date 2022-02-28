// 2022-02-27 Sun. 21:59
// 1152 단어의 개수
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000000];
    gets(str);
    int words = 0;
    char* ptr = strtok(str, " ");
    while (ptr != NULL)
    {
        words++;
        ptr = strtok(NULL, " ");
    }
    printf("%d", words);
}