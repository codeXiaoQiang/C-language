#include <stdio.h>

int main()
{
    /*
     * 1.scanf�������ȴ����뻺�����л�ȡ����, ������뻺������û������, ��ô����ͻ�����, �ȴ��û���������
     * 2.����û�����������, scanf�����Ὣ�û���������ݷŵ����뻺������, Ȼ���ٴ����뻺�����л�ȡ����
     * 3.������뻺�������Ѿ���������, ��ô�Ͳ���Ҫ���û���������, ��ֱ�Ӵ����뻺�����л�ȡ����
     *
     * fflush����:
     * ����������뻺����, ��ֻ����Windows��ʹ��
     * setbuf����:
     * ����������뻺����, ����������ƽ̨ʹ��(Windows/Linux/Max OS)
     * �Ƽ�:
     * �Ժ�ÿ��ʹ����scanf�������ں������һ��setbuf����, ���Խ��ͳ����������ļ���
     */

    int num1;
    scanf("%i", &num1);
    printf("num1 = %i\n", num1);// 11
//    fflush(stdin); // ������뻺����
    setbuf(stdin, NULL);// ������뻺����
    char ch;
    scanf("%c", &ch);
    printf("ch = %c\n", ch);// �ո�
//    fflush(stdin); // ������뻺����
    setbuf(stdin, NULL);
    int num2;
    scanf("%i", &num2);
    printf("num2 = %i\n", num2);// 12
//    fflush(stdin); // ������뻺����
    setbuf(stdin, NULL);
    return 0;
}
