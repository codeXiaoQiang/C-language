#include <stdio.h>

int main()
{
    /*
     * sizeof运算符
     * 格式:
     * 第一种格式:
     * sizeof(变量/常量/数据类型);
     * 第二种格式:
     * sizeof 变量/常量
     * 作用:
     * sizeof运算符是专门用于计算变量/常量/数据类型占用的存储空间的
     */
    int num = 10; // 4个字节
    // 计算变量
//    int res = sizeof(num);
//    int res = sizeof num;
    // 计算常量
//    int res = sizeof(3.14);
//    int res = sizeof 3.14;
    // 计算数据类型
//    int res = sizeof(char);
//    int res = sizeof char; // 会报错, 不能省略()
    printf("res = %i\n", res);
    return 0;
}
