#include <stdio.h>

int main()
{
    /*
     * fputc/fputs/fgetc/fgets这些函数都是用于操作文本文件的
     * fwrite / fread这两个函数就是用于操作二进制文件的
     *
     * 也就是说fputc/fputs保存的都是ASCII码
     * fwrite保存的是二进制
     *
     * 1.fwrite函数
     * 一次性写入一块数据
     */
    FILE *fp = fopen("abc.txt", "wb+");
//    int num = 123456;
    int ages[] = {1, 3, 5};
    /*
     * 第一个参数: 需要写入文件的数据地址
     * 第二个参数: 每次写入多少个字节
     * 第三个参数: 需要写入多少次
     * 第四个参数: 被写入文件的句柄
     */
    // 将num中sizeof(int)个字节1次行写入到fp对应的文件中
//    fwrite(&num, sizeof(int), 1, fp);

//    printf("sizeof(ages) = %i\n", sizeof(ages));
    fwrite(&ages, sizeof(ages), 1, fp);
    return 0;
}
