#include <stdio.h>

int main()
{
    /*
     * �ṹ������
     * ���Ƕ�������鱣��ṹ�����
     */
    struct Person{
        char *name;
        int age;
        double height;
    };
//    struct Person p1 = {"lnj", 35, 1.90};
//    struct Person p2 = {"zs", 22, 1.2};
//    struct Person p3 = {"ls", 33, 1.4};
//    struct Person p4 = {"ww", 56, 1.8};
    // �������� ��������[Ԫ�ظ���];
//    struct Person ps[4];
//    ps[0] = p1;
//    ps[1] = p2;
//    ps[2] = p3;
//    ps[3] = p4;

//    struct Person ps[4] = {p1, p2, p3, p4};
     struct Person ps[4] ={
         {"lnj", 35, 1.90},
         {"zs", 22, 1.2},
         {"ls", 33, 1.4},
         {"ww", 56, 1.8},
     };

    return 0;
}
