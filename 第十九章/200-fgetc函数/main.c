#include <stdio.h>

int main()
{
    /*
     * һ�ζ�ȡһ���ַ�
     */
    FILE *fp = fopen("it.txt", "w+");
    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('d', fp);

//    FILE *fp = fopen("it.txt", "r");

    // ���ļ�ָ������ָ��һ�����Ŀ�ͷ
    rewind(fp);
//    fputc('l', fp);

    /*
     * ��һ������: ����ȡ���ļ��� �ļ����
     * ����ֵ: ��ǰ��ȡ�����ַ�, �����ȡʧ�ܻ᷵��EOF
     */
    char ch = fgetc(fp);
    printf("ch = %c\n", ch);

    char ch;
    while((ch = fgetc(fp)) != EOF){
        printf("ch = %c\n", ch);
    }
    return 0;
}
