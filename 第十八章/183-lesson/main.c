#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
     * malloc ����:
     * �ڶ��ڴ�������һ������ָ�����ȵĿռ�
     * ����һ������: ����ָ����Ҫ����ռ�ĳ���
     * �᷵��һ��void *:
     * void *������ָ��, ����ת��Ϊ�������͵�ָ��
     * �Ὣ����õ��ڴ��ַ�ŵ�void *�з��ظ�����
     *
     * void * malloc(size_t _Size);
     *
     * ע��:
     * 1.ʹ��malloc�������뵼��һ��ͷ�ļ� stdlib.h
     * 2.ͨ��malloc����Ŀռ�Ĭ�ϴ洢������������, Ҳ����ϵͳ��������ǳ�ʼ��
     * 3.����һ�������, malloc�����memset�����������ʹ��
     *
     * memset����:
     * ר�����ڳ�ʼ��һ���ڴ�ռ�
     * ��һ������: ������Ҫ��ʼ���ڴ�ĵ�ַ
     * �ڶ�������: ������Ҫ��ʼ����ֵ
     * ����������: ������Ҫ��ʼ���ĳ���
     * memset(void *_Dst,int _Val,size_t _Size)
     *
     * ע���:
     * ʹ��memset�������뵼��һ��ͷ�ļ� string.h
     */

//    int *num = (int *)malloc(sizeof(int));
//    *num = 666;
//    printf("*num = %i\n", *num);

    // ����ϵͳ, ������Ҫ����12���ֽڴ洢�ռ�
    int *p = (int *)malloc(3 * sizeof(int));
//    *(p + 0) = 1;
//    *(p + 1) = 3;
//    *(p + 2) = 5;
//    printf("*(p +0) = %i\n", *(p +0));
//    printf("*(p +1) = %i\n", *(p +1));
//    printf("*(p +2) = %i\n", *(p +2));

//    p[0] = 1;
//    p[1] = 3;
//    p[2] = 5;
//    printf("p[0] = %i\n", p[0]);
//    printf("p[1] = %i\n", p[1]);
//    printf("p[2] = %i\n", p[2]);

    // ����ϵͳ����һ��ռ���г�ʼ��
    memset(p, 0, 3 * sizeof(int));


    for(int i = 0; i < 3; i++){
        printf("p[%i] = %i\n", i, p[i]);
    }
    return 0;
}
