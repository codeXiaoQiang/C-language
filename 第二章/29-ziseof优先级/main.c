#include <stdio.h>

int main()
{
    /*
     * 1.sizeof��һ�������, ����һ������
     * 2.��Ȼsizeof��һ�������, ������Ҳ�����ȼ�
     * sizeof����������ȼ��������������
     */
    //               double int           double double          double
//    int res = sizeof(3.14 + 1); // sizeof(3.14 + 1.0) --> sizeof(4.14)
//    printf("res = %i\n", res);

    // ����sizeof�����ȼ��������������
    // ���Ի��ȼ��� sizeof 3.14 --> 8
    // Ȼ�������ü�������1���  8 + 1 == 9
//    int res = sizeof 3.14 + 1;
    int res = sizeof(3.14) + 1;
    printf("res = %i\n", res);
    return 0;
}
