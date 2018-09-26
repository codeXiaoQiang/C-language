#include <stdio.h>

int main()
{
    /*
     * ������
     *
     * ������ĸ�ʽ:
     * union ����������{
     *   �������� ��������;
     *   �������� ��������;
     *   ... ...
     * }
     * �����嶨��ĸ�ʽ�ͽṹ��ֻ�йؼ��ֲ�һ��, �ṹ����struct,��������union
     *
     * �������ص�:
     * �ṹ���ÿ�����Զ���ռ��һ�鵥�����ڴ�ռ�, �����������е����Զ�����ͬһ��洢�ռ�
     * ֻҪ����һ�����Է����˸ı�, ���������Զ����ܵ�Ӱ��
     *
     * Ӧ�ó���:
     * ͬһ������, �ڲ�ͬ��ʱ��,��Ҫ��ʾ��ͬ�������ݵ�ʱ��, ���ǾͿ���ʹ�ù�����
     */

    struct Person{
        int age; // 4
        char ch; // 4
    };
    struct Person p;
    printf("sizeof(p) = %i\n", sizeof(p));

    union Test{
        int age;
        char ch;
    };
    union Test t;
    printf("sizeof(p) = %i\n", sizeof(t));

    t.age = 33;
    printf("t.age = %i\n", t.age); // 33
    t.ch = 'a';
    printf("t.ch = %c\n", t.ch); // a
    printf("t.age = %i\n", t.age); // 97
    return 0;
}
