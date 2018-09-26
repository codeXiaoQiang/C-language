#include <stdio.h>
void encode(char *name, char *newName, int code);
int main()
{
    /*
     * 要求定义两个函数, 实现文件的加密和解密
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
    // 1.打开一个需要加密的文件
    FILE *fr = fopen(name, "r+");
    // 2.打开一个需要写入加密内容的文件
    FILE *fw = fopen(newName, "w+");
    // 3.不断的读不断的加密不断的写入
    char ch = EOF;
    while((ch = fgetc(fr)) != EOF){
        ch = ch ^ code;
        fputc(ch, fw);
    }
    // 4.关闭已经打开的文件
    fclose(fr);
    fclose(fw);
 }

