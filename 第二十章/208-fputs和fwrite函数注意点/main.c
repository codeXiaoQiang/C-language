#include <stdio.h>


int main()
{
    FILE *fp = fopen("def.txt", "wb+");
    char *str = "lnj\0it666";
    // fputs是以文本文件的形式存储, 存储的是ASCII
    // 注意点: 如果利用fputs写入字符串, 遇到\0会停止写入
//    fputs(str, fp);
    // 注意点: 在二进制中是没有\n \0这些概念的, 写入的时候不会受到\0 \n的影响
    fwrite(str, 9, 1, fp);

    return 0;
}
