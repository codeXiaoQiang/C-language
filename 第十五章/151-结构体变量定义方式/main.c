#include <stdio.h>

int main()
{
    /*
     * ����ṹ������ļ��ַ�ʽ
     * 1.�ȶ���ṹ������, �ٶ���ṹ�����
     * 2.����ṹ�����͵�ͬʱ����ṹ�����
     * 3.����ṹ�����͵�ͬʱʡ�Խṹ������, ͬʱ����ṹ�����
     */
    // 1.�ȶ���ṹ������, �ٶ���ṹ�����
    /*
    struct Person{
        char *name;
        int age;
        double height;
    };
    struct Person p1;
    struct Person p11;
    */

    // 2.����ṹ�����͵�ͬʱ����ṹ�����
    /*
    struct Person{
        char *name;
        int age;
        double height;
    } p2;
    p2.name = "lnj";
    printf("name = %s\n", p2.name);
    struct Person p22;
    */
    // 3.����ṹ�����͵�ͬʱʡ�Խṹ������, ͬʱ����ṹ�����
    // �����ṹ��
    // �ص�: �ṹ������ֻ��ʹ��һ��
    struct{
        char *name;
        int age;
        double height;
    } p3;
    p3.name = "it666";
    printf("name = %s\n", p3.name);
    return 0;
}
