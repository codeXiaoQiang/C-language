#include <stdio.h>

int main()
{
    /*
     * ����˵����
     * ����˵����һ�㶼����������int���͵�
     *
     * 1.˵�����ȵ�
     * short
     * long
     * long long
     *
     * 2.˵������λ��
     * unsigned  �޷��ŵ�:
     * ���Ѷ����Ƶĵ�һλ��������λ��ʹ��, ����ֻ�ܴ洢�������, ���ܴ洢����
     * ע���: ���������unsigned������, ��ôȡ����ʱ�����ʹ��%u, %u�ʹ������޷��ŵķ�ʽȡ��
     * Ӧ�ó���: �洢���д��, ѧ���ķ����Ȳ��ܳ��ָ��������
     *
     * signed    �з��ŵ�:
     * Ĭ��int�����з��ŵ�, �Ϳ��Ա��渺��,��,����, ����signedһ���ò���
     *
     *
     * 0000 0000 0000 0000 0000 00000 0000 0000
     * ������������, ���ڴ��ж����Ƶĵ�һλ���Ƿ���λ
     * �����һλ��0, ����ǰ��������һ������
     * �����һλ��1, ����ǰ��������һ������
     * Ĭ����������е�int���Ͷ����з��ŵ�, Ҳ���Ƕ��Ὣ��һλ��������λ, Ҳ���ǿ��Ա��渺��,��,����
     */
//    int num1 = -6;
//    int num2 = 6;
//    int num3 = 0;
//    printf("num1 = %i\n", num1);
//    printf("num2 = %i\n", num2);
//    printf("num3 = %i\n", num3);

//    signed int num1 = -6;
//    signed int num2 = 6;
//    signed int num3 = 0;
//    printf("num1 = %i\n", num1);
//    printf("num2 = %i\n", num2);
//    printf("num3 = %i\n", num3);

    unsigned int num1 = -6;
    unsigned int num2 = 6;
    unsigned int num3 = 0;
    printf("num1 = %u\n", num1);
    printf("num2 = %u\n", num2);
    printf("num3 = %u\n", num3);
    return 0;
}

