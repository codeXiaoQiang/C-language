
#include <stdio.h>

int main()
{
    /*
     *
     八进制  十六进制 错      十进制   错    十进制   十进制
     00011   0x001   0x7h4  10.98   0986  .089    -109
     十进制  错     二进制   十六进制  错  十进制  错      十进制
     +178   0b325  0b0010  0xffdc  96f 96.0f   96.oF  -.003

     在C语言中, 如果想用十六进制表示某个数, 前面需要加上0x
     在C语言中, 如果想用八进制表示某个数, 前面需要加上0
     在C语言中, 如果想用二进制表示某个数, 前面需要加上0b
     */

    // 注意点:
    // 1.%i %d代表以十进制输出整数
    // 2.0x和0X一样,0b和0B一样

//    // 用十进制来表示
//    int num1 = 12;
//    printf("num1 = %i\n", num1);
//    // 用十六进制来表示
//    int num2 = 0xc;
//    printf("num2 = %i\n", num2);
//    // 用八进制来表示
//    int num3 = 014;
//    printf("num3 = %i\n", num3);
//    // 用二进制来表示
//    int num4 = 0b1100;
//    printf("num4 = %i\n", num4);


    int num = 12;
    // 以十进制输出
    printf("%i\n", num);
    // 以八进制输出
    printf("%o\n", num);
    // 以十六进制输出
    printf("%x\n", num);
    // 以二进制输出必须自己实现(后续会讲解如何实现)
    return 0;
}
