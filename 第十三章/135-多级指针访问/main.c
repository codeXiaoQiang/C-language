#include <stdio.h>

int main()
{
    /*
     * ָ�������
     */
    int ages[3] = {1, 3, 5};

    for(int i = 0; i < 3; i++){
        printf("ages[%i] = %i\n", i, ages[i]);
    }

    // �������Ʊ���ľ�������ռ���ڴ���С���Ǹ���ַ
//    printf("ages = %p\n", ages); // ages = 0060FEA0
//    printf("&ages = %p\n", &ages); // ages = 0060FEA0

    // ��Ȼ�������Ʊ���ľ��ǵ�ַ, ��ָ��Ҳ�����ڱ����ַ��, ����ָ��Ҳ����ָ������
    int *p = &ages;
//    printf("p = %p\n", p); // 0060FEA0
    // ����: �������ָ�뱣������ĵ�ַ֮��, ��ô p = ages = &ages;

    // ages[0] �൱�� 0060FEA0[0]
//    ages[0] = 8;
//    p[0] = 999;


    printf("--------------\n");
    for(int i = 0; i < 3; i++){
        printf("p[%i] = %i\n", i, p[i]);
    }
    return 0;
}
