#include <stdio.h>

int main()
{
    /*
     * ��������
     * ʲô�Ǳ�������?
     * �����������ȡ�������д洢����������, ���Ǿͳ�֮Ϊ��������
     */
    int ages[] = {1, 3, 5};
//    printf("ages[0] = %i\n", ages[0]);
//    printf("ages[1] = %i\n", ages[1]);
//    printf("ages[2] = %i\n", ages[2]);
//    printf("ages[3] = %i\n", ages[3]);
//    printf("ages[4] = %i\n", ages[4]);

    // ע���:
    // �ڱ��������ʱ��, ѭ��������������Ҫд��

    // ����: sizeof(��������) ���Եõ�������ռ�õ��ڴ��ܴ�С
//    printf("sizeof(ages) = %i\n", sizeof(ages));
    // ����: sizeof(����Ԫ��) ���Եõ���Ԫ��ռ�õ��ڴ��С
//    printf("sizeof(ages[1]) = %i\n", sizeof(ages[1]));
//    printf("length = %i\n", sizeof(ages) / sizeof(ages[1]));

    int length = sizeof(ages) / sizeof(ages[1]);
    for(int i = 0; i < length; i++){
        printf("ages[%i] = %lf\n", i,ages[i]);
    }
    return 0;
}
