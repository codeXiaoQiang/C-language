#include <stdio.h>

int main()
{
    /*
    // Ҫ����д�����ַ�������Ԫ�ص�д��
    int ages[3] = {1, 3, 5};
//    printf("ages[0] = %i\n", ages[0]);
    int *p = ages;
//      printf("p[0] = %i\n", p[0]);
      printf("0[p] = %i\n", 0[p]);
      */

    /*
     * ָ����Խ��мӼ���
     * ָ�� +1  -1
     * Ӧ�ó���: һ�㶼������ָ��������
     *
     * ָ�����+1�ǼӶ���, �ӵľ���ָ���������ռ�õ��ֽ���
     * ע���:
     * 1. -1����һ����ҵ���������õ�
     * 2.ֻ��ָ��ſ�����+1-1����, ������������
     */

    int ages[3] = {1, 3, 5};
    int *p = ages;
//    printf("*p = %i\n", *p); // 1
//    printf("*(p + 1) = %i\n", *(p + 1)); // 3
//    printf("*(p + 2) = %i\n", *(p + 2)); // 5

//    printf("*p = %i\n", *p++); // 1
//    printf("*p = %i\n", *p++); // 3
//    printf("*p = %i\n", *p); // 5
//    printf("*p = %i\n", *(--p)); // 3


    for(int i = 0; i < 3; i++){
//        printf("ages[%i] = %i\n", i, ages[i]);
        printf("ages[%i] = %i\n", i, *p++);
    }
    return 0;
}
