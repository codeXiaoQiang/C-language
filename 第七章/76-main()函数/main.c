#include <stdio.h>

/*
 * 1.main������ϵͳ�Զ����õĺ���, ���ǲ����ֶ�����
 * 2.ϵͳ�ڵ���main������ʱ, Ĭ�ϻᴫ����������
 * argc: �ڶ������鱣�����ݵĸ���
 * argv: Ĭ�ϱ�����һ������, ������ݾ��ǵ�ǰ�ļ��ĵ�ַ
 * 3.argv�б����Ԫ���ǿ��Զ�̬��ӵ�
 *
 * 4.main������return 0 �ĺ���
 * ����ϵͳ��ǰ����������������, ���return���صĲ���0, �ʹ������ϵͳ����������������
 *
 * ��ʱֻ��Ҫ֪��һ��:
 * ����ҵ������, �����ǿ���ͨ������̨(CMD)�����г����ʱ���main�������ݲ����ľͿ�����
 */
int main(int argc, const char *argv[])
{
    // ["lnj", "zs"]
    // ������������һ��Ԫ��
    // ����������������Ԫ��
    // Ĭ�������, ϵͳ�ڵ���main������ʱ��, ���argv��������д��һ��Ԫ��
    // ["C:\Users\Jonathan_Lee\Desktop\C_Lessons\Code\build-76-lesson-Desktop_Qt_5_11_0_MinGW_32bit-Debug\debug\76-lesson.exe"]
    printf("argc = %i\n", argc);
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
    printf("argv[2] = %s\n", argv[2]);
    return 0;
}
