
#include <stdio.h>

int main()
{
    // 1.ָ��ֻ�ܱ����ַ, ���ܱ���������ֵ
//    int *p = 666; // ��ҵ����ǧ��Ҫ����д
//    int *p = 3.14;  // ��ҵ����ǧ��Ҫ����д
//    float num = 3.14;
//    int *p = &num; // ��ȷ

    // 2.һ���������Ա����ָ��ָ��
//    int num = 9;
//    int *p1;
//    int *p2;
//    p1 = &num;
//    p2 = &num;

////    *p1 = 668;
//    *p2 = 668;
//    printf("%i\n", *p1);
//    printf("%i\n", *p2);

    // 3.ָ���ָ����Ըı�
//    int num = 9;
//    int *p;
//    p = &num;
//    int value = 555;
//    p = &value;

//    printf("%i\n", *p); // 555

    // 4.����ָ�����ʱǰ�����������, ����ͽ���Ҫ����ı���ǰ�����������һ��
    int num = 6;
//    int *p;
    double *p;
    p = &num;

    return 0;
}
