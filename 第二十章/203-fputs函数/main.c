#include <stdio.h>

int main()
{
    /*
     * һ����д��һ������
     * fputs��������һ��д��һ���ַ�
     * ע���: ������д���ַ��ĺ����Զ����\n
     */
    // 1.��һ���ļ�
    FILE *fp = fopen("test.txt", "w+");
    /*
     * һ��д��һ���ַ�
     * ��һ������: ��Ҫд�������
     * �ڶ�������: д�뵽�ĸ��ļ����ļ��ľ��
     */
    fputs("www.it666.com\n", fp);
    fputs("www.itzb.com\n", fp);
    // 3.�رմ򿪵��ļ�
    fclose(fp);
    return 0;
}
