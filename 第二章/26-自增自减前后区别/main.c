#include <stdio.h>

int main()
{
    /*
     * �������Լ�����д�ڱ���ǰ��, Ҳ����д�ڱ�������
     * д��ǰ��ͺ��������:
     * ����������Լ�д�ڱ���ǰ��, �������������Լ��ٲ�����������
     * ����������Լ�д�ڱ�������, �����Ȳ��������������������Լ�
     */
    /*
    int num = 10;
//    int res = 10 + num++; // int res = 10 + 10; num++
    int res = 10 + num--; // int res = 10 + 10; num--
    printf("res = %i\n", res); // 20 20
    printf("num = %i\n", num); // 11 9
    */

    int num = 10;
//    int res = 10 + ++num; // ++num; int res = 10 + 11
    int res = 10 + --num; // --num; int res = 10 + 9
    printf("res = %i\n", res); // 21 19
    printf("num = %i\n", num); // 11 9

    return 0;
}
