#include <stdio.h>

int main()
{
    /*
     * ����:
     * Ҫ���û�����һ��0~100�ķ���, ��������ķ��������Ӧ�ĵȼ�
     * A : 90~100   99/10 = 9 100/10 = 10
     * B : 80~89    87/10 = 8
     * C : 70~79
     * D : 60~69
     * E : 60������
     */
    // 1.������������û����������
    int score = -1;
    // 2.������ʦ���¼�����
    printf("������һ��0~100�ķ���, �Իس�����\n");
    // 3.�����û����������
    scanf("%i", &score);
    // 4.�����û������ж϶�Ӧ�ĵȼ�
    // 4.1�ų��Ƿ�����
//    if(score < 0 || score > 100){
//        printf("����У���Ķ��Ӱ�\n");
//    }else if(score >= 90 && score <= 100){
//        printf("A\n");
//    }else if(score >= 80 && score <= 89){
//        printf("B\n");
//    }else if(score >= 70 && score <= 79){
//        printf("C\n");
//    }else if(score >= 60 && score <= 69){
//        printf("D\n");
//    }else{
//        printf("E\n");
//    }

    switch(score/10){
    case 10:
//        printf("A\n");
//        break;
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    case 5:
//        printf("E\n");
//        break;
    case 4:
//        printf("E\n");
//        break;
    case 3:
//        printf("E\n");
//        break;
    case 2:
//        printf("E\n");
//        break;
    case 1:
//        printf("E\n");
//        break;
    case 0:
        printf("E\n");
        break;
    default:
        printf("����У���Ķ��Ӱ�\n");
    }
    return 0;
}
