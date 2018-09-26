#include <stdio.h>

int main()
{
    /*
     * 打开和关闭文件
     * fopen / fclose函数
     * 一次性读写一个字符
     * fputc / fgetc函数
     * 一次性读写一行数据
     * fputs / fgets函数
     * 注意点: 一次性读写一个字符 / 一次性读写一行数据都属于文本操作, 都是以文本文件的形式来保存
     *
     * 一次性读取一块数据
     * fwrite / fread函数
     * 注意点: 一次性读取一块数据数据二进制操作, 都是以二进制文件的形式保存数据
     *
     * 第一个参数: 需要写入的字符
     * 第二个参数: 需要写入到什么地方
     * 返回值: 被写入的字符
     * int fputc(char ch, FILE* fp);
     *
     * 第一个参数: 从哪个文件中读取
     * 返回值: 读取到的那个字符
     * int fgetc(FILE* fp);
     *
     * 第一个参数: 需要写入的数据
     * 第二个参数: 写入到什么地方
     * 返回值: 返回0代表写入成功, 返回EOF代表写入失败
     * 注意点:
     * 1.不会在写入数据的后面添加\n
     * 2.写入的时候遇到\0就会自动停止写入
     * int fputs(char *str, FILE *fp);
     *
     * 第一个参数: 读取到的数据放到哪里
     * 第二个参数: 需要读取多少个字节的数据
     * 第三个参数: 从什么地方读取
     * 返回值: 读取到什么就返回什么, 出错返 EOF。
     * 注意点:
     * 1.读取到\n会自动停止读取, \n会被读取进来
     * 2.maxCount指定多少不一定会读取多少, 读取到\n会自动停止读取
     * 3.读取的时候只能读取maxCount-1个字符, 会在最后自动添加\0
     * 4.读取到EOF会自动停止读取
     * char *fgets(char *buf, int maxCount, FILE *fp)
     *
     *
     * 第一个参数:需要写入的数据
     * 第二个参数:每次写入多少个字节
     * 第三个参数:一共写入多少次
     * 第四个参数:写入到什么地方
     * 返回值: 写入了多少次就返回多少, 出错或文件结束，返回 0
     * 注意点:
     * 1.一般情况下写入一块数据, 每次写入多少个字节我们会写大一点, 而一共写入多少次我们会写小一点
     * 2.由于fwrite是以二进制的形式写入文件的, 所以和以文本文件的写入不同, fwrite函数会忽略\0 \n等内容
     * int fwrite(char *str, int size, int count, FILE *fp);
     *
     * 第一个参数:读取的数据放到哪里
     * 第二个参数:每次读取多少个字节
     * 第三个参数:一共读取多少次
     * 第四个参数: 从什么地方读取
     * 返回值: 读取了多少次就返回多少, 出错或文件结束，返回 0
     * 注意点:
     * 1.一般情况下写入一块数据, 每次写入多少个字节我们会按照写入数据的类型来填写, 数据一共多大就写入多少次
     *
     * int fread(char *str, int size, int count, FILE *fp);
     */
    // 1.打开文件
    FILE *fp = fopen("it666.txt", "wb+");
    /*
    // 2.写入一个字符
    int res =  fputc('a', fp);
    printf("res = %i\n", res);

    // 每次操作完文件, 文件的指针都会向后移动
    // 所以要想成功读取, 必须将文件指针重新移动到起始位置
    rewind(fp);
    // 3.读取一个字符
    char ch = fgetc(fp);
    printf("ch = %c\n", ch);
    */

    /*
    // 2.写入一行数据
    int res = fputs("lnj\n", fp);
//    fputs("www\0itzbcom", fp);
    fputs("www.itzb.com\n", fp);
//    printf("res = %i\n", res);

    rewind(fp);
    // 3.读取一行数据
    char *buf[1024];
//    char *res2 = fgets(buf, 1024, fp);
    char *res2 = fgets(buf, 3, fp);
    printf("res2 = %s\n", res2);
    printf("buf = %s", buf);
    printf("---------\n");
    */


    // 1.写入一块数据
    char *str = "123456";
//    int res = fwrite(str, 1, 6, fp);
    int res = fwrite(str, 6, 1, fp);
    printf("res = %i\n", res);

    rewind(fp);
    // 2.读取一块数据
    char buf[1024] = {0};
    int res2 = fread(buf, 1, 6, fp);
    printf("res2 = %i\n", res2);
    printf("buf = %s\n", buf);

    // 关闭已经打开的文件
    fclose(fp);
    return 0;
}
