#include <stdio.h>

int call(){
    value = 999;
    printf("value = %i\n", value);
    return 0;
}
int value; // ȫ�ֱ���
int main()
{
    /*
     * 1.ʲô�Ǿֲ�����
     * �����ڴ������еı���, ���ǳ�֮Ϊ�ֲ�����
     * ������:
     * �Ӷ����������һ�п�ʼ, ֱ������return��������}����Ϊֹ
     * 1.ʲô��ȫ�ֱ���
     * �����ڴ���������ı���, ���ǳ�֮Ϊȫ�ֱ���
     * ������:
     * �Ӷ����������һ�п�ʼ, ֱ���ļ�ĩβ
     */
    /*
//    num = 10;
//    printf("num = %i\n", num);
//    int num; // �ֲ�����
//    num = 10;
//    printf("num = %i\n", num);
//    {
//        int num = 998;
////        printf("num = %i\n", num);
//    }
//    printf("num = %i\n", num);
    */
    value = 666;
    printf("value = %i\n", value);
    call();
    return 0; // ��������
//    num = 10;
//    printf("num = %i\n", num);
}
