#include <stdio.h>


int main()
{
    FILE *fp = fopen("def.txt", "wb+");
    char *str = "lnj\0it666";
    // fputs�����ı��ļ�����ʽ�洢, �洢����ASCII
    // ע���: �������fputsд���ַ���, ����\0��ֹͣд��
//    fputs(str, fp);
    // ע���: �ڶ���������û��\n \0��Щ�����, д���ʱ�򲻻��ܵ�\0 \n��Ӱ��
    fwrite(str, 9, 1, fp);

    return 0;
}
