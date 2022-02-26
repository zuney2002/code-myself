// 2022-02-26 Sat. 21:44
// 2525 ¿Àºì ½Ã°è
#include <stdio.h>
int main()
{
    int h, m, t;
    scanf("%d %d", &h, &m);
    scanf("%d", &t);
    int eh, em;
    eh = t / 60;
    em = t % 60;
    h += (em + m) / 60;
    h = (h + eh) % 24;
    m = (em + m ) % 60;
    printf("%d %d", h, m);
}