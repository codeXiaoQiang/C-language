#include <stdio.h>

#define DEBUG

int main()
{
    /*
     * ��һ�ָ�ʽ:
     * #if #elif #else #endif
     * �ڶ��ָ�ʽ:
     * #ifdef #else #endif
     *
     * #ifdef����: �ж��Ƿ���ĳһ����
     *
     * #ifndef #else #endif
     * #ifndef����: �ж��Ƿ�û�ж���ĳһ����
     */

//#ifdef DEBUG
//    printf("�����׶�\n");
//#else
//    printf("����׶�\n");
//#endif

#ifndef DEBUG
     printf("����׶�\n");
#else
    printf("�����׶�\n");
#endif
    return 0;
}
