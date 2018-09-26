
#include <stdio.h>

int main()
{
    /*
     * fgets函数的注意点
     * 1.每次只能读取n-1个字符, 会在末尾自动添加\0
     * 2.遇到\n会自动停止读取, 并且\n也会被读取进来
     * 3.遇到EOF也会自动停止读取
     */

    // 1.打开一个文件
    // abcdefg
    FILE *fp = fopen("test.txt", "r+");
    // 2.读取一行数据
    // 2.1定义一个字符数组, 用于保存读取到的数据
//    char buf[1024];
//    fgets(buf, 4, fp); // abc

    char buf[1024];
    fgets(buf, 1024, fp); // 读到\n结束
    printf("buf = %s\n", buf);
    fgets(buf, 1024, fp); // 读到EOF结束
    printf("buf = %s\n", buf); // abc
    return 0;
}
