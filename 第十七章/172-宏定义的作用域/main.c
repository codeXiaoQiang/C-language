#include <stdio.h>

#define COUNT 666
int main()
{
    /*
     * �궨���������
     * �궨����������ȫ�ֱ�������, ���ǿ�����ǰ����
     *
     * �������ǴӶ������һ�п�ʼ, ֱ���ļ�ĩβ
     * ����ͨ��#undef ����  ����ǰ�������������
     */
    printf("%i\n", COUNT);
    test();
    return 0;
}
//#undef COUNT
void test(){
    printf("%i\n", COUNT);
}
