
#include <stdio.h>
void test();
int main()
{
    /*
     * static�Ծֲ�����������
     * �������static���ξֲ�����, ��ô�Ὣ�ֲ������Ĵ洢�����ջ���ƶ�����̬��
     * ��̬��ֻ�г�������Ż��ͷ�
     *
     * Ӧ�ó���:
     * �Ż�����, ���������Ч��
     */
    test();
    test();
    test();

    return 0;
}
void calculate(int r){
    // PIʹ�õĸ��ʷǳ���, �����һ���ֲ������Ļ�, ÿ�ε��ö������¿��ٴ洢�ռ�, �������ܲ���
    // ���PI��static�ı���, ��ôֻ�Ὺ��һ��, ��ô���ܾͻ�úܶ�
    static double pi = 3.1415926;
    return r * r * pi;
}

void test(){
    static int num = 0; // �ֲ�����
    num++; //  1 2 3
    printf("num = %i\n", num); //  1 2 3
}
