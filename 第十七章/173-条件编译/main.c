#include <stdio.h>

#define SCORE 90
int main()
{
    /*
     * ��������
     * #if
     * #else
     * #endif
     *
     * ���������if else������, ����Ҳ������
     * 1.if else������ڳ������е�ʱ��ִ�е�
     *   #if #else #endif����Ԥ�����ʱ��ִ�е�
     * 2.if else������еĴ��붼����뵽������
     *  #if #else #endif��ֻ���������������Ż���뵽������
     *
     * ע���:
     * #if �� #endif �������һ��
     * #if #else #endif �������һ��
     * #if #elif #else #endif �������һ��, ����#elif������һ����Ը�
     *
     * ������ô���#endif��������ʡ��
     */
//    int score = 90;
//    if(100 == score){
//        printf("100��\n");
//    }else if(60 <= score){
//        printf("������\n");
//    }else{
//        printf("����100��\n");
//    }

#if 100 == SCORE
    printf("100��\n");
#elif 60 <= SCORE
    printf("������\n");
#else
    printf("����100��\n");
#endif

      /*
       * ע���: ���������в��ܻ�ȡ������ֵ
       * ��Ϊ�����ǳ���ִ�е�ʱ����е�, ����������ʱԤ�����ʱ���ִ����
       * ����Ϊδ��, ����������
       *
       * ��������һ������Ϻ궨����ʹ��
       * ��Ϊ�궨����������붼����Ԥ�����ʱ��ִ�е�
       */
//      int score = 100;
//#if 0 == score
//    printf("0��\n");
//#else
//    printf("100��\n");
//#endif

    return 0;
}
