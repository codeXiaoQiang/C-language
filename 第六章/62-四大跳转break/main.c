#include <stdio.h>

int main()
{
    /*
     * break
     * breakֻ������switch��ѭ���ṹ��, �뿪Ӧ�õķ�Χû���κ�����
     * break��switch�����, ��������������(����)switch���
     * break��ѭ�������, ��������������ѭ����� while , dowhile, for
     *
     * ע���:
     * 1.�뿪Ӧ�÷�Χ��ᱨ��
     * 2.��Ӧ�÷�Χ��, break���治�ܱ�д���, ��Ϊ��Զִ�в���
     * 3.���ѭ��Ƕ�׵�ʱ��, breakֻ����������(�����)��ѭ��
     */

//    switch(1){
//    case 1:
//        printf("A\n");
//        break;
//    case 2:
//        printf("B\n");
//        break;
//    default:
//        printf("Other\n");
//    }

//    int num = 1;
//    while(num <= 10){
//        if(num == 5){
//            break;
//        }
//        printf("num = %i\n", num); // 1 2 3 4
//        num++; // 2 3 4 5
//    }

//    for(int num = 1; num <= 10; num++){
//        if(num == 5){
//            break;
//        }
//        printf("num = %i\n", num);
//    }


//    if(1){
//        printf("���д�㶫��\n");
//        break; // �뿪Ӧ�÷�Χ��ᱨ��
//    }


//        switch(1){
//        case 1:
//            printf("A\n");
//            break;
//            printf("break��������\n");
//        case 2:
//            printf("B\n");
//            break;
//        default:
//            printf("Other\n");
//        }


//        int num = 1;
//        while(num <= 10){
//            printf("breakǰ������\n");
//            break;
//            printf("break��������\n");
//            num++;
//        }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(j == 1){
                break;
            }
            printf("j = %i\n", j);
        }
        printf("----i = %i\n", i);
    }
    return 0;
}
