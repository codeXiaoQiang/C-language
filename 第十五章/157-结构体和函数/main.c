#include <stdio.h>

struct Person{
    char *name;
    int age;
};

void test(struct Person per);

int main()
{
    /*
     * �ṹ��ͺ���
     * ��Ȼ�ṹ��ʱ��������, ���ǽṹ�����֮��ĸ�ֵ
     * �ͻ����������͸�ֵһ��, �ǿ���
     */

    // ע���: ����ṹ�����Ͳ������洢�ռ�
    // ֻ�ж���ṹ������Ż����洢�ռ�
    /*
    struct Person{
        char *name;
        int age;
    };
    struct Person p1 = {"lnj", 35};
    struct Person p2;
    p2 = p1;
    p2.name = "zs";
    printf("p1.name = %s\n", p1.name); // lnj
    printf("p2.name = %s\n", p2.name); //  zs
    */

    struct Person p1 = {"lnj", 35};
    printf("p1.name = %s\n", p1.name); // lnj
    test(p1);
    printf("p1.name = %s\n", p1.name); // lnj
    return 0;
}
void test(struct Person per){
    per.name = "zs";
}
