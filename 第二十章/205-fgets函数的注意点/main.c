
#include <stdio.h>

int main()
{
    /*
     * fgets������ע���
     * 1.ÿ��ֻ�ܶ�ȡn-1���ַ�, ����ĩβ�Զ����\0
     * 2.����\n���Զ�ֹͣ��ȡ, ����\nҲ�ᱻ��ȡ����
     * 3.����EOFҲ���Զ�ֹͣ��ȡ
     */

    // 1.��һ���ļ�
    // abcdefg
    FILE *fp = fopen("test.txt", "r+");
    // 2.��ȡһ������
    // 2.1����һ���ַ�����, ���ڱ����ȡ��������
//    char buf[1024];
//    fgets(buf, 4, fp); // abc

    char buf[1024];
    fgets(buf, 1024, fp); // ����\n����
    printf("buf = %s\n", buf);
    fgets(buf, 1024, fp); // ����EOF����
    printf("buf = %s\n", buf); // abc
    return 0;
}
