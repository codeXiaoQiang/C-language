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
     * ------------------------------------
     * char 1���ֽ�  -2^7~2^7-1  -128~127
     * short int 2���ֽ� -2^15~2^15-1
     * int  4���ֽ�  -2^31~2^31-1
     * long int:
     * �����32λ��������, long int ռ��4���ֽ�
     * �����64λ��������, long int ռ��8���ֽ�
     *
     * long long int 8���ֽ� -2^63~2^63-1
     * ע���:
     * 1.����洢�����ݳ��������Ͷ�Ӧ��ȡֵ��Χ, ��ô�ͻᵼ�´洢�����ݲ���
     * 2.�����ڴ�ǳ�����, �����ڱ�д�����ʱ��, ��������Ķ������
     */
//    char ch1 = 127;
//    printf("ch1 = %i\n", ch1);
//    char ch2 = 128; // �洢�����ݳ����˷�Χ
//    printf("ch1 = %i\n", ch2);  // ȡ�������ݺʹ洢�����ݲ�һ��

//    int num = 12345678901;
//    printf("num = %i\n", num);

//    int num1 = 6; //0000 0000 0000 0000 0000 0000 0000 0110
//    long long int num2 = 12345678901;
//    // ע���: C���Բ�����ô��, ֻ����ôȡ
//    // %i�ǰ���int��ȡ,  %lli����long long int��ȡ
//    printf("num = %lli\n", num2);

//    char ch;
//    short int num1;
//    int num2;
//    long int num3;
//    long long int num4;
//    printf("ch = %i\n", sizeof(ch));
//    printf("short = %i\n", sizeof(num1));
//    printf("int = %i\n", sizeof(num2));
//    printf("long = %i\n", sizeof(num3));
//    printf("long long = %i\n", sizeof(num4));


    // ����˵�����ȵ�����˵����һ�㶼������˵��int���͵�, ������ʹ�õ�ʱ�����ʡ��int
    // short --> %hi,  long --> %li,  long long --> %lli
    short num1 = 123; // short == short int
    printf("num1 = %hi\n", num1);
    long num2 = 123; // long  == long int
    printf("num2 = %li\n", num2);
    long long num3 = 123; // long long  == long long int
    printf("num3 = %lli\n", num3);
    return 0;
}
