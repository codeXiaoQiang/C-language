#include <stdio.h>

int main()
{
    /*
     * 一次写入一个字符
     * fputc就是写入一个字符
     * 通过观察发现, fputc是以文本文件的形式保存数据
     *
     * 注意点:
     * w /w+ , 如果文件中有内容会被覆盖
     */
    // 1.先打开一个文件
    FILE *fp = fopen("it.txt", "w");
    // 2.往文件中写入一个字符
    /*
     * 第一个参数: 需要写入到文件的字符
     * 第二个参数: 已经开打的文件句柄
     * 返回值: 写入成功，返回写入成功字符，如果失败，返回 EOF
     * EOF是文件结束的标识, 本质上就是-1
     */
    int res = fputc('a', fp);
//    printf("res = %i\n", res);
//    for(char ch = 'a'; ch <= 'z'; ch++){
//        fputc(ch, fp);
//    }
    // 3.关闭打开的文件
    fclose(fp);
    return 0;
}
