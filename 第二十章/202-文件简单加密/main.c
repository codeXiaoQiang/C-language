#include <stdio.h>
void encode(char *name, char *newName, int code);
int main()
{
    /*
     * Ҫ������������, ʵ���ļ��ļ��ܺͽ���
     */

//    int num = 9;
//    num = num ^ 6;
//    num = num ^ 6;
//    printf("num = %i\n", num);

//    encode("main.c", "encode.c", 6);
    encode("encode.c", "decode.c", 6);

    return 0;
}
void encode(char *name, char *newName, int code){
    // 1.��һ����Ҫ���ܵ��ļ�
    FILE *fr = fopen(name, "r+");
    // 2.��һ����Ҫд��������ݵ��ļ�
    FILE *fw = fopen(newName, "w+");
    // 3.���ϵĶ����ϵļ��ܲ��ϵ�д��
    char ch = EOF;
    while((ch = fgetc(fr)) != EOF){
        ch = ch ^ code;
        fputc(ch, fw);
    }
    // 4.�ر��Ѿ��򿪵��ļ�
    fclose(fr);
    fclose(fw);
 }

