#include <stdio.h>

int main()
{
    /*
     * ����:
     * Ҫ���û������ĸ�����, ����֮�����
     * ����: �û�������� 18,2,16  --> 2,16,18
     */
    // 1.�����Ǹ�����, �����û����������
    int a, b, c, d;
    a = -1, b = -1, c = -1, d = -1;
    // 2.��ʾ�û������������
    printf("�������ĸ�����, �ö��Ÿ���, �Իس�����\n");
    // 3.�����û����������
    scanf("%i,%i,%i,%i", &a, &b, &c, &d);
    // 4.���е�һ������
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    if(c > d){
        int temp = c;
        c = d;
        d = temp;
    }
    // 5.���еڶ�������
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    // 6.���е����ֵ�����
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    // 7.������
    printf("%i,%i,%i,%i\n", a, b, c, d);
    return 0;
}
