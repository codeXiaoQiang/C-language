#include <stdio.h>

int main()
{
    /*
     * fputc/fputs/fgetc/fgets��Щ�����������ڲ����ı��ļ���
     * fwrite / fread�����������������ڲ����������ļ���
     *
     * Ҳ����˵fputc/fputs����Ķ���ASCII��
     * fwrite������Ƕ�����
     *
     * 1.fwrite����
     * һ����д��һ������
     */
    FILE *fp = fopen("abc.txt", "wb+");
//    int num = 123456;
    int ages[] = {1, 3, 5};
    /*
     * ��һ������: ��Ҫд���ļ������ݵ�ַ
     * �ڶ�������: ÿ��д����ٸ��ֽ�
     * ����������: ��Ҫд����ٴ�
     * ���ĸ�����: ��д���ļ��ľ��
     */
    // ��num��sizeof(int)���ֽ�1����д�뵽fp��Ӧ���ļ���
//    fwrite(&num, sizeof(int), 1, fp);

//    printf("sizeof(ages) = %i\n", sizeof(ages));
    fwrite(&ages, sizeof(ages), 1, fp);
    return 0;
}
