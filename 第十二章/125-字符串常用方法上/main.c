#include <stdio.h>
#include <string.h>

int main()
{
//    char str1[6] = "lnj";
//    char str2[6] = "it666";

    // �ַ���ƴ��
    /*
    // ������������, �Ὣ����һ������ƴ�ӵ�ǰ��һ������ĺ���
    // ע���: ǰ��һ����������㹻��, ��������ҵ�����л�����һЩδ֪��BUG
    // strcat(dest, src)
//    strcat(str1, str2);
//    printf("str1 = %s\n", str1);
//    printf("str2 = %s\n", str2);

     // �Ὣsrc�е�count���ַ�ƴ�ӵ�dest����
//    strncat(dest, src, count)
    int size = sizeof(str1)/sizeof(str1[0]); // �ַ�������Դ洢���ٸ�Ԫ��
    int len = strlen(str1); // ����\0����洢�˶��ٸ�Ԫ��
    int count = size - len - 1; // -1��\0��λ��
//    printf("size = %i\n", size);
//    printf("len = %i\n", len);
//    printf("count = %i\n", count);
    strncat(str1, str2, count);
    */

    // ��ҵ: �Լ�д����ʵ��strcat����

    // �ַ�������
    /*
    // ���ý�src�е��ַ�������dest��, ���ǵ�dest��ԭ�е�����
    // ע���: ǰ��һ����������㹻��, ��������ҵ�����л�����һЩδ֪��BUG
    // strcpy(dest, src);
//    strcpy(str1, str2);
//    printf("str1 = %s\n", str1);
//    printf("str2 = %s\n", str2);
    */

    // ��ҵ: �Լ�д����ʵ��strcpy����

    // �ַ����Ƚ�
    // �����δӵ�0��������ʼ, ȡ��str1��str2��ÿ��Ԫ�ؽ��бȽ�
    // ���str1��ǰ��Ԫ�ش���str2��ǰ��Ԫ��, ��ô����һ������
    // ���str1��ǰ��Ԫ��С��str2��ǰ��Ԫ��, ��ô����һ������
    // ���str1��ǰ��Ԫ�ص���str2��ǰ��Ԫ��, ��ô����0
//    strcmp(str1, str2);

    char str1[6] = "124";
    char str2[6] = "133";
    int res = strcmp(str1, str2);
    printf("res = %i\n", res);

    // ��ҵ: �Լ�д����ʵ��strcmp����
    return 0;
}
