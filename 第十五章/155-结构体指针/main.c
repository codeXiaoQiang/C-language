#include <stdio.h>

int main()
{
    /*
     * �ṹ��ָ��
     * ��Ϊ�ṹ�����Ҳ������ڴ�ռ�, ���Խṹ�����Ҳ���ڴ��ַ, ����Ҳ����ʹ��ָ�뱣��ṹ������ĵ�ַ
     *
     * ����:
     * ����ָ��ṹ�������ָ�����·�͹�ȥ����ָ����ͨ������һ��
     *
     * ���ָ��ָ����һ���ṹ�����, ��ô���ʽṹ����������Ծ���3�ַ�ʽ
     * �ṹ���������.��������;
     * (*�ṹ��ָ���������).��������;
     * �ṹ��ָ���������->��������;
     */

    struct Person{
        char *name;
        int age;
        double height;
    };
    struct Person per = {"lnj", 35, 1.9};
    struct Person *p;
    p = &per;
//    printf("per.name = %s\n", per.name);
//    printf("per.name = %s\n", (*p).name);
    printf("per.name = %s\n", p->name);
    return 0;
}
