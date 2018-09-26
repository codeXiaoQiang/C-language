#include <stdio.h>

int main()
{
    /*
     * 一次读取一个字符
     */
    FILE *fp = fopen("it.txt", "w+");
    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('d', fp);

//    FILE *fp = fopen("it.txt", "r");

    // 将文件指针重新指向一个流的开头
    rewind(fp);
//    fputc('l', fp);

    /*
     * 第一个参数: 被读取的文件的 文件句柄
     * 返回值: 当前获取到的字符, 如果获取失败会返回EOF
     */
    char ch = fgetc(fp);
    printf("ch = %c\n", ch);

    char ch;
    while((ch = fgetc(fp)) != EOF){
        printf("ch = %c\n", ch);
    }
    return 0;
}
