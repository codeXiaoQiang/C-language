#include <stdio.h>

int main()
{
    /*
     * �ṹ�������ʼ���ļ��ַ�ʽ
     * 1.�����ͬʱ��ʼ��
     * 2.�ȶ����ٳ�ʼ��
     */
    // 1.����ṹ������
    struct Dog{
        char *name;
        int age;
        double height;
    };
    // 2.����ṹ�����
    // 2.1�ȶ�����ʼ��
//    struct Dog dd;
//    dd.name = "ww";
//    dd.age = 1;
//    dd.height = 1.5;

    // 2.2�����ͬʱ��ʼ��
//    struct Dog dd = {"ww", 1, 1.5};
    // ע���: ����ڶ����ͬʱ��ʼ��, ��ô��ʼ����˳�����ͽṹ�������е�˳��һ��
//    struct Dog dd = {1, "ww", 1.5};
    struct Dog dd = {.age = 1, .name = "ww"};
    printf("name = %s\n", dd.name);
    printf("name = %i\n", dd.age);
    printf("name = %lf\n", dd.height);

    // 3.����ĳ�ʼ����ʽ
    // ����ֻ���ڶ����ͬʱ��ȫ��ʼ��, �����ȶ�������ȫ��ʼ��
    // ���ǽṹ��ȿ����ڶ����ͬʱ��ȫ��ʼ��, Ҳ�����ȶ�������ȫ��ʼ

//    int ages[3] = {1, 3, 5};
//    int ages[3];
//    ages = {1, 3, 5};

    // ��ҵ�������Ƽ�������д
//     struct Dog dd;
//     dd = (struct Dog){"ww", 1, 1.5};
//     printf("name = %s\n", dd.name);
//     printf("name = %i\n", dd.age);
//     printf("name = %lf\n", dd.height);

    return 0;
}
