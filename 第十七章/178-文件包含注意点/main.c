#include <stdio.h>

#define ZS int
int main()
{
    /*
     * typedef ���������������
     *
     * ��ʽ:
     * typedef ԭ������������ �µ���������;
     *
     * ע���:
     * typedef�൱�ڸ�������һ�����, �˻����Ǹ���, ֻ��������һ�����ƶ���
     * ����typedef���Ƕ���һ���µ���������, ���Ƕ���һ���µ����ƶ���
     */
    // 1.��ϵͳ�����������
    typedef int ZHENGSHU;
    // 2.�������������
    typedef ZHENGSHU DOUBI;

    int num = 9;
    printf("num = %i\n", num);

    ZHENGSHU value = 666;
    printf("value = %i\n", value);

    DOUBI i = 888;
    printf("i = %i\n", i);

    ZS j = 123;
    printf("j = %i\n", j);
    return 0;
}
