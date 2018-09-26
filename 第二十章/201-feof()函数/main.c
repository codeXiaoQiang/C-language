#include <stdio.h>

int main()
{
    /*
     * 文件末尾的判断
     * EOF, feof()函数
     */

    FILE *fp = fopen("it.txt", "w+");
    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('d', fp);
    rewind(fp);

    // feof返回值: 如果返回0, 代表没有读到文件末尾
    //            如果返回非0, 代表读到了文件末尾
    // 如果按照下列的写法, 会多读取一个字符, 原因就是feof函数在判断文件指针的时, 指针还没有移动
    // 只有写入或者读取过了指针才会移动
//    while(!feof(fp)){
//        char ch = fgetc(fp);
//        printf("ch = %c\n", ch);
//    }

    char ch;
    // 注意点: 在使用feof函数的时, 一定要先取, 然后再判断feof
    //        否则会多取一个
    while((ch = fgetc(fp)) && !feof(fp)){
        printf("ch = %c\n", ch);
    }
    return 0;
}
