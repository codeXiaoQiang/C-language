#include <stdio.h>

int main()
{
    /*
     * ����ת��
     * 1.�Զ�����ת��
     * 1.1��������ת��
     * 1.2��ֵ����ת��
     * 2.ǿ������ת��
     */
    /*
    // 1.�Զ�����ת��
    // 1.1��������ת��
    int num = 10;
    double value = 3.0;
    //           int / double;
    // ��C�����в�ͬ���͵�����, �ǲ��ܽ��������
    // ֻ����ͬ���͵����ݲ��ܽ�������
    // �����������ֲ�ͬ���͵�����Ҫ��������ʱ, ���Զ���С����ת��Ϊ������
    // double res = 10 / 3.0;
    // double res = 10.0 / 3.0;
    // �����������ʲô���͵õ��Ľ������ʲô����
    double res = num / value;
    printf("res = %lf\n", res);
    */
    /*
    // 1.2��ֵ����ת��
    int num = 10;
    //              int
    // �����������ֵȺ��ұߵ��������ͺ͵Ⱥ���ߵ��������Ͳ�ͬʱ, ���Զ����Ⱥ��ұߵ�����ת��Ϊ�Ⱥ���ߵ�����
    double value = num;
    printf("value = %lf\n", value);
    */

    /*
    int num = 10;
    double value = 3.0;
    // int res = 10 / 3.0;
    // int res = 10.0 / 3.0;
    // int res = 3.33333;
    // int res = 3;
    // ���������ʽִ�еĹ����н���������ת��
    // ��һ��ת�������������ʱ��
    // �ڶ���ת���Ǹ�ֵ��ʱ��
    int res = num / value;
    */

    /*
    // 2.ǿ������ת��
    int num = 10;
    double value = (double)num;
    printf("value = %lf\n", value);
    */

    // ע���: ����ת������Ӱ��ԭ�б�����ֵ
//    int num = 10;
//    double res = num / 3.0;
//    printf("res = %lf\n", res); // 3.3333
//    printf("num = %i\n", num); // 10

//    int num = 10;
//    double value = num;
//    printf("value = %lf\n", value); // 10.0000
//    printf("num = %i\n", num); // 10

    int num = 10;
    double value = (double)num;
    printf("value = %lf\n", value); // 10.0000
    printf("num = %i\n", num); // 10
    return 0;
}
