#include <stdio.h>

int main()
{
    /*
     * ��ֵ�����
     * 1.�򵥸�ֵ�����
     * =
     * 2.���Ӹ�ֵ�����
     * += -= *= /= %=
     */
    // 1.�򵥸�ֵ�����
    // ����: ���Ⱥ��ұߵ�ֵ��ֵ���Ⱥ���ߵı���
    // �����: �ҽ����
    int num;
    num = 666;
    printf("num = %i\n", num);

    // 2.���Ӹ�ֵ�����
    int value = 10;
//    value += 5; // value = value + 5; value = 10 + 5;
//    value -= 5; // value = value - 5; value = 10 - 5;
    value *= 2; // value = value * 2; value = 10 * 2;
    printf("value = %i\n", value);
    return 0;
}
