#include <stdio.h>

int main()
{
    /*
     * �ļ�ĩβ���ж�
     * EOF, feof()����
     */

    FILE *fp = fopen("it.txt", "w+");
    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('d', fp);
    rewind(fp);

    // feof����ֵ: �������0, ����û�ж����ļ�ĩβ
    //            ������ط�0, ����������ļ�ĩβ
    // ����������е�д��, ����ȡһ���ַ�, ԭ�����feof�������ж��ļ�ָ���ʱ, ָ�뻹û���ƶ�
    // ֻ��д����߶�ȡ����ָ��Ż��ƶ�
//    while(!feof(fp)){
//        char ch = fgetc(fp);
//        printf("ch = %c\n", ch);
//    }

    char ch;
    // ע���: ��ʹ��feof������ʱ, һ��Ҫ��ȡ, Ȼ�����ж�feof
    //        ������ȡһ��
    while((ch = fgetc(fp)) && !feof(fp)){
        printf("ch = %c\n", ch);
    }
    return 0;
}
