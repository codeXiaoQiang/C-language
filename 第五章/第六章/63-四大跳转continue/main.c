#include <stdio.h>

int main()
{
    /*
     * continue
     * continueֻ������ѭ����, �뿪Ӧ�÷�Χû���κ�����
     *
     * ����: ��������ѭ��, ������һ��ѭ��
     * ֻҪ��ѭ��������continue, �ͻ�ֱ�����ص��������ʽ
     *
     * ע���:
     * 1.��breakһ���뿪ѭ��û���κ�����, �ᱨ��
     * 2.��breakһ��continue���治�ܱ�д���, ��Զִ�в���
     * 3.��breakһ��, ѭ��Ƕ�׵�ʱ��continueֻ����������(���)��ѭ��
     */
//    int num = 0;
//    while(num < 10){
//        num++; // num = 1 2 3
//        if(num == 2){
//            continue;
//        }
//        printf("num = %i\n", num); // 1 3
//    }

//    if(1){
//        continue; // �ᱨ��
//    }


//    int num = 0;
//    while(num < 10){
//        num++;
//        printf("continue֮ǰ�����\n");
//        continue;
//        printf("continue֮������\n");
//    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(j == 1){
                continue;
            }
            printf("j = %i\n", j);
        }
        printf("----i = %i\n", i);
    }
    return 0;
}

