// 2022-02-27 Sun. 20:33
// 15596 �Լ�
// �� ������ �Լ� 'sum'�� �ϼ��Ǿ��� ���ϴ� �ᱣ���� ���������� Ȯ���ϹǷ� main �Լ� ����.
#include <stdio.h>
long long sum(int *a, int n)
{
    long long s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s; 
}