#include <stdio.h>

int main()
{
    /*
     * 1.printf����:
     * ��ָ���������������Ļ��
     * 2.printf��ʽ:
     * printf("���������");
     * printf("��ʽ���ַ���", ����б���);
     * 3.��ʽ���ַ�����ʽ:
     * %[��־][������][.����][����]����
     */
//    printf("hello lnj\n");
//    int num = 998;
//    printf("num = %i\n", num);
    // ������ͳ����ͱ���
    int num = 666;
//    printf("%i\n", num);
//    printf("%i\n", 777);
//    printf("%d\n", num);
//    printf("%d\n", 777);

    // ���ʵ�ͳ����ͱ���
    float fValue = 1.11F;
    double dValue = 2.22;
//    printf("%f\n", fValue);
//    printf("%lf\n", dValue);
//    printf("%f\n", 3.33F);
//    printf("%lf\n", 4.44);

    // ����ַ��ͳ����ͱ���
    char ch = 'a';
    printf("%c\n", ch);
    printf("%c\n", 'b');
    return 0;
}
