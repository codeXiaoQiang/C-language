#include <stdio.h>
//int sum(int num1, int num2);
void test(int num1, int num2, int *res1, int *res2, int *res3, int *res4);
int main()
{
    // ����: Ҫ����һ������, ����ͬʱ�������������ĺ�,��,��,��
    // ��Ҫ���֪������: ��C������, Ĭ�������һ������ֻ�ܷ���һ��ֵ
    //                 �������ĳһ������ͬʱ���ض��ֵ, ���Խ���ָ����ʵ��
    int a = 10;
    int b = 20;
//    int res = sum(a, b);
//    printf("res = %i\n", res);

    int d, e, f, g;
    test(a, b, &d, &e, &f, &g);
    printf("�� = %i\n", d);
    printf("�� = %i\n", e);
    printf("�� = %i\n", f);
    printf("�� = %i\n", g);
    return 0;
//    printf("return ��������\n");
}

/**
 * @brief test ����ͬʱ�������������ĺ�,��,��,��
 * @param num1 ��������ĵ�һ������
 * @param num2 ��������ĵڶ�������
 * @param res1 ��
 * @param res2 ��
 * @param res3 ��
 * @param res4 ��
 */
void test(int num1, int num2, int *res1, int *res2, int *res3, int *res4){
    *res1 = num1 + num2;
    *res2 = num1 - num2;
    *res3 = num1 * num2;
    *res4 = num1 / num2;
}

/*
int sum(int num1, int num2){
    // ע���:
    // return�����������ڽ�����ǰ����
    // ֻҪ����ִ�е�return, �ͻ�����ֹͣ����ִ��
    // ����return ���治���Ա�д�κ����, ��Ϊִ�в���
    return num1 + num2;
//    return num1 - num2;
//    return num1 * num2;
//    return num1 / num2;
}
*/
