#include <stdio.h>

int main()
{
    /*
     * ע���:
     * 1.�������Լ�ֻ�����ڱ���, �������ڳ����ͱ��ʽ
     * 2.����ҵ�������������Լ���õ�������
     * 3.ͬһ�����ʽ��ͬһ������ͬʱ�������Լ�, ���ָ�ʽ�ı��ʽ��C������û�й涨�������
     * ���Խ���ǲ�ȷ����, �ڲ�ͬ�ı����������еĽ����ͬ
     */
    /*
    int num = 10;
    num++;
    num--;

//    10++; // �ᱨ��

    int a, b;
    a = 10;
    b = 20;
    (a + b)++;
    */

    /*
    int num = 10;
//    int res = 10 + num++; // int res = 10 + 10; num++;
//    int res = 10 + num;
//    num++;
//    int value = num++;
    int value = num;
    num++;
    printf("value = %i\n", value); // 10
    printf("num = %i\n", num); // 11
    */

    int num = 10;
    int res = ++num + ++num; // ǧ��Ҫ����д
    printf("res = %i\n", res);

    return 0;
}

