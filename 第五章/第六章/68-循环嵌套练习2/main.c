#include <stdio.h>

int main()
{
    /*
     -
     --
     ---
     */
    int count = 0;
//    for(int i = 0; i < 3; i++){ // ����
//        for(int j = 0; j <= count; j++){ // ����
//            printf("-");
//        }
//        printf("\n");
//        count++;
//    }

    // ����: ��⳯��, �޸���ѭ���������ʽ
    for(int i = 0; i < 3; i++){ // ����
        for(int j = 0; j <= i; j++){ // ����
            printf("-");
        }
        printf("\n");
    }
    return 0;
}
