#include <stdio.h>

int main()
{
    /*
     * �ṹ��Ƕ�׶���
     * �ṹ������Կ�������һ���ṹ��
     *
     * ��ߴ���ĸ�����
     */
    /*
    struct Person{
        char *name;
        int age;

        // ��������
        int year;
        int month;
        int day;

        // ��������
        int year2;
        int month2;
        int day2;

        // ���׶�԰����
        // ��Сѧ����
        // ����ѧ����
        // ����ѧ����
        // ��������
        // �������
        // ... ...
    }
    */
    // 1.������һ�����ڵĽṹ������
    struct Date{
        int year;
        int month;
        int day;
    };
    // 2.����һ���˵Ľṹ������
    struct Person{
        char *name;
        int age;
        struct Date birthday;
    };
    struct Person p = {"lnj", 35, {2020, 12, 12}};

    printf("name = %s\n", p.name);
    printf("name = %i\n", p.age);
    printf("name = %i\n", p.birthday.year);
    printf("name = %i\n", p.birthday.month);
    printf("name = %i\n", p.birthday.day);

    return 0;
}
