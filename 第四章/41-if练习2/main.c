#include <stdio.h>

int main()
{
    // 2.���û�����1~7����, Ȼ������û�������������ڼ�

    // 1.������������û����������
    int day = -1;
    // 2.��ʾ�û������������
    printf("������һ��1~7������, �Իس�����\n");
    // 3.�����û����������
    scanf("%i", &day);
    // 4.�жϷǷ����
    /*
    if(day < 1 || day > 7){ // day = 8
        printf("�ص�����\n"); // ��ӡ
    }else{
        // 5.������������������
        // U(YOU)SB
        if(1 == day){ // 1
            printf("����һ\n");
        }else if(2 == day){
            printf("���ڶ�\n");
        }else if(3 == day){
            printf("������\n");
        }else if(4 == day){
            printf("������\n");
        }else if(5 == day){
            printf("������\n");
        }else if(6 == day){
            printf("������\n");
        }else{
            printf("������\n");
        }
    }
    */

    if(day < 1 || day > 7){ // day = 8
        printf("�ص�����\n"); // ��ӡ
    }else if(1 == day){ // 1
        printf("����һ\n");
    }else if(2 == day){
        printf("���ڶ�\n");
    }else if(3 == day){
        printf("������\n");
    }else if(4 == day){
        printf("������\n");
    }else if(5 == day){
        printf("������\n");
    }else if(6 == day){
        printf("������\n");
    }else{
        printf("������\n");
    }
    return 0;
}
