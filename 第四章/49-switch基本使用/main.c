#include <stdio.h>

int main()
{
    /*
     * C�����еĵڶ���ѡ��ṹ
     * switchѡ��ṹ�ĸ�ʽ:
     *
     *
     * switch(���ʽ){
     * case ���ʽ1: // �൱��else if
     *  �����ʽ1���Ƶ����;
     *  break;
     * case ���ʽ2: // �൱��else if
     *  �����ʽ2���Ƶ����;
     *  break;
     * default: // �൱��else
     *  ��default���Ƶ����;
     *  break;
     * }
     *
     * ִ������:
     * 1.����switch����()�б��ʽ�Ľ��
     * 2.���ü���Ľ���������µĺ�switch����{}�е�case�ı��ʽ��ֵһ�αȽ�
     * 3.һ������switch���ʽ��ֵ��case���ʽ��ֵ��ͬ, ��ִ�и�case��������
     * 4.һ��ĳ��case��ִ����, ������case�Ͳ���ִ����
     * 5.�������case���ʽ��ֵ��switch���ʽ��ֵ�������, ��ô��ִ��default��������
     */

    int day = 3;
    switch(day){
    case 1:
        printf("����һ\n");
        break;
    case 2:
        printf("���ڶ�\n");
        break;
    default:
        printf("Other\n");
        break;
    }
    return 0;
}
