#include <stdio.h>

int main()
{
    /*
     * 类型说明符
     * 类型说明符一般都是用于修饰int类型的
     *
     * 1.说明长度的
     * short
     * long
     * long long
     *
     * 2.说明符号位的
     * unsigned  无符号的:
     * 不把二进制的第一位当做符号位来使用, 所以只能存储零和正数, 不能存储负数
     * 注意点: 如果变量被unsigned修饰了, 那么取出的时候必须使用%u, %u就代表用无符号的方式取出
     * 应用场景: 存储银行存款, 学生的分数等不能出现负数的情况
     *
     * signed    有符号的:
     * 默认int就是有符号的, 就可以保存负数,零,正数, 所以signed一般用不上
     *
     *
     * 0000 0000 0000 0000 0000 00000 0000 0000
     * 对于整数而言, 在内存中二进制的第一位就是符号位
     * 如果第一位是0, 代表当前的整数是一个正数
     * 如果第一位是1, 代表当前的整数是一个负数
     * 默认情况下所有的int类型都是有符号的, 也就是都会将第一位看做符号位, 也就是可以保存负数,零,正数
     */
//    int num1 = -6;
//    int num2 = 6;
//    int num3 = 0;
//    printf("num1 = %i\n", num1);
//    printf("num2 = %i\n", num2);
//    printf("num3 = %i\n", num3);

//    signed int num1 = -6;
//    signed int num2 = 6;
//    signed int num3 = 0;
//    printf("num1 = %i\n", num1);
//    printf("num2 = %i\n", num2);
//    printf("num3 = %i\n", num3);

    unsigned int num1 = -6;
    unsigned int num2 = 6;
    unsigned int num3 = 0;
    printf("num1 = %u\n", num1);
    printf("num2 = %u\n", num2);
    printf("num3 = %u\n", num3);
    return 0;
}

