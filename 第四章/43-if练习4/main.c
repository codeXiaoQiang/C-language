#include <stdio.h>

int main()
{
    // ����: Ҫ���û�����һ��1~12����, �ж���ʲô����֮�����
    // 3~5���� 6~8�ļ� 9~11�＾ 12~2����
    // 1.������������û����������
    int month = -1;
    // 2.��ʾ�û������������
    printf("������һ��1~12����, �Իس�����\n");
    // 3.�����û����������
    scanf("%i", &month);
    // 4.�ų��Ƿ�����
    // 5.�ж�������
    /*
    if(month < 1 || month > 12){
        printf("�ص�����\n");
    }else if(3 == month || 4 == month || 5 == month){
        printf("����\n");
    }else if(6 == month || 7 == month || 8 == month){
        printf("�ļ�\n");
    }else if(9 == month || 10 == month || 11 == month){
        printf("�＾\n");
    }else if(12 == month || 1 == month || 2 == month){
        printf("����\n");
    }
    */


    if(month < 1 || month > 12){
        printf("�ص�����\n");
    }else if(month >= 3 && month <= 5){
        printf("����\n");
    }else if(month >=6 && month <= 8){
        printf("�ļ�\n");
    }else if(month >= 9 && month <= 11){
        printf("�＾\n");
    }else{
        printf("����\n");
    }
    return 0;
}

