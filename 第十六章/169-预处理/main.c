#include <stdio.h>

#define COUNT 5
//#define URL "http://127.0.0.1"
//#define URL "http://www.it666.com"
int main()
{
    /*
     * Ԥ����ָ��
     * �ļ����� include
     * �궨�� #define
     * �������� #if #else #endif
     *
     * �궨��:
     * �궨�����Ԥ�����ʱ��, �ú궨���ֵ���滻�������
     *
     * �궨��ĸ�ʽ:
     * #define ������ ��ֵ
     *
     * Ӧ�ó���:
     * ��ҵ������Ϊ�����׶κͲ���׶�
     * �����ڳ��򿪷��л��õ��ܶ�ĵ�ַ
     *
     * ע���:
     * 1.�궨��ĺ��治Ҫд�ֺ�
     * ��Ϊ�궨���ǵ������滻, ���ú��ֵ�滻����
     * 2.�궨���Ϊ����, һ���ǲ��������ĺ궨��, һ���Ǵ������ĺ궨��
     */

    /* */
//    int ages[5] = {1, 3, 5, 7, 9};
    int ages[COUNT] = {1, 3, 5, 7, 9};
    // ���˿��Զ�̬��������ĳ�������, ���������ú궨��
//    int len = sizeof(ages) / sizeof(ages[1]);
//    for(int i = 0; i < len; i++){
    for(int i = 0; i < COUNT; i++){
        printf("ages[%i] = %i\n", i, ages[i]);
    }


//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
//    printf("%s\n", URL);
    return 0;
}
