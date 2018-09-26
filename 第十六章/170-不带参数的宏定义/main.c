#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

#define SUM(a, b) a+b
int main()
{
    /*
     * 带参数的宏定义
     * #define 宏名称(参数) 参数
     *
     * 一些简单的函数, 除了可以使用函数来封装以外, 还可以使用宏定义来实现
     *
     * 注意点:
     * 宏定义无论有没有参数, 都是单纯的替换
     *
     * 在企业开发中到底应该用函数还是用宏定义?
     * 1.如果函数的业务逻辑非常简单, 建议使用宏定义
     * 因为宏定义的效率更高
     * 宏定义是在预处理的时候就执行了, 而函数是在运行的时候才会执行
     * 宏定义只会做简单的替换, 而函数还需要分配内存空间
     * 2.如果业务逻辑比较复杂, 那么还是建议使用函数
     */
    int num1 = 10;
    int num2 = 20;
//    int res = sum(num1, num2);

    // int res = SUM(num1, num2);
    // int res = a+b
    // int res = num1+num2
    int res = SUM(num1, num2);
    printf("res = %i\n", res);
    return 0;
}
