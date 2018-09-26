#include <stdio.h>

int main()
{
    /*
     * 一次性写入一行数据
     * fputs函数可以一次写入一堆字符
     * 注意点: 不会在写入字符的后面自动添加\n
     */
    // 1.打开一个文件
    FILE *fp = fopen("test.txt", "w+");
    /*
     * 一次写入一堆字符
     * 第一个参数: 需要写入的数据
     * 第二个参数: 写入到哪个文件的文件的句柄
     */
    fputs("www.it666.com\n", fp);
    fputs("www.itzb.com\n", fp);
    // 3.关闭打开的文件
    fclose(fp);
    return 0;
}
