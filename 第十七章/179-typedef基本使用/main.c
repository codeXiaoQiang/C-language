#include <stdio.h>
int sum(int num1, int num2);
int minus(int num1, int num2);

int main()
{
    /*
     * typedefһ�����ڸ����ӵ��������������, ���㽫��ʹ��
     * �ṹ��
     * ָ��
     * ָ������ָ��
     * ָ��ṹ���ָ��
     */

    // 1.����ָͨ�������
//    char *name = "lnj";
    typedef char* String;
//    String name = "it666";
//    printf("name = %s\n", name);

    // 2.���ṹ�������
    /*
    struct Person{
        String name;
        int age;
    };
    // 2.1�ȶ���ṹ������, �ٸ��ṹ�����������
    typedef struct Person ps;
//    struct Person p;
    */
    /*
    // 2.2����ṹ�����͵�ͬʱ, ���ṹ�����������
    typedef struct Person{
        String name;
        int age;
    } ps;
     ps p = {"lnj", 58};
    */
    /*
    // 2.3����ṹ�����͵�ͬʱ, ���ṹ�����������, ����ʡ��ԭ�����͵�����
    // ��ҵ������д��
    typedef struct{
        String name;
        int age;
    } Person;

    //  struct Person p = {"lnj", 58};
    Person p = {"lnj", 58};
    printf("name = %s\n", p.name);
    */

    // ��������/ö�������, ��ʽ�ͽṹ��һģһ��

    // 3.��ָ������ָ�������
//    int (*funP)(int, int);
//    funP = &sum;

//    int (*funP2)(int, int);
//    funP2 = &minus;

    // ע���: �����ָ������ָ�������, ��ôָ�����ƾ��Ǳ���
    // ��ҵ��������ʹ��, �洦�ɼ�
    typedef int (*funP)(int, int);
    funP p1 = &sum;
    funP p2 = &minus;

    return 0;
}
int sum(int num1, int num2){
    return num1 + num2;
}
int minus(int num1, int num2){
    return num1 - num2;
}

