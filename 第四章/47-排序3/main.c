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
    // 4.��һ�ֱȽ�
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        int temp = a;
        a = c;
        c = temp;
    }
    if(a > d){
        int temp = a;
        a = d;
        d = temp;
    }
    // 5.�ڶ��ֱȽ�
    if(b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    if(b > d){
        int temp = b;
        b = d;
        d = temp;
    }
    // 6.�����ֱȽ�
    if(c > d){
        int temp = c;
        c = d;
        d = temp;
    }
    // 7.��������Ľ��
    printf("%i,%i,%i,%i\n", a, b, c, d);
    return 0;
}
