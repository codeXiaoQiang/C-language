#include <stdio.h>

int main()
{
    // 1.���û�������������, �ҳ����ֵȻ�����, ��ifʵ��
    // 1.������������û����������
    int a, b, c;
    a = -1, b = -1, c = -1;
    // 2.�����û������������
    printf("��������������, �ö��Ÿ���, �Իس�����\n");
    // 3.�����û����������
    scanf("%i,%i,%i", &a, &b, &c); // 18,10, 22
    /*
    // 4.�ȱȽ�������, ȡ�����ֵ
    int max = -1;
    if(a > b){ // 18 > 10
        max = a; // max = 18
    }else{
        max = b;
    }
    // 5.�øղűȽϵ����ֵ��ʣ��������бȽ�
    if(max > c){ // 18 > 22
        max = max;
    }else{
        max = c; // max = 22
    }
    */

    /*
    int max = -1;
    if(a > b){ // 18 > 10
        if(a > c){ // 18 > 22
            max = a;
        }else{
            max = c; // max = 22
        }
    }else{
        if(b > c){
            max = b;
        }else{
            max = c;
        }
    }
    */

    int max = -1;
    if(a > b && a > c){
        max = a;
    }else if(b > a && b > c){
        max = b;
    }else if(c > a && c > b){
        max = c;
    }
    // 6.������
    printf("max = %i\n",max);

    // 2.���û�����1~7����, Ȼ������û�������������ڼ�
    return 0;
}

